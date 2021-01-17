// 项目四 学生信息管理系统
// 目的要求：用C++语言设计并实现学生信息管理系统，加强对C++语言中类与对象的认识与理解。
// 实验内容：
// 学生信息包括：学号，姓名，年龄，性别，出生年月，地址，电话，E-mail等。
// 系统具有以下管理功能：
// 0.系统以菜单方式工作
// 1.学生信息录入功能（学生信息用文件保存）
// 2.学生信息浏览功能
// 3.查询
// 4.排序功能
// 5.删除
// 6.修改
#include<iostream>
#include<string>
#include<fstream> //处理文件
#include<iomanip>//setw()
#include<vector> //动态数组
#include<sstream> //istringstream:从string对象str中读取字符。
#include<cstdlib>
#include<deque>
#include<regex>


// #include<cstdio>//删除临时文件
//用于将string全部小写化
// #include <algorithm> // transform




using namespace std;


//全部声明一遍
void RowShow(int row);
int *Get_id(const int line[],int size);
int *Row(string data, int c);
void choose_func();
void Search_data(string data,int c);
void Show_table();
void Search_id(int data);
void Show_all();
int Remove_blankLine(string file);

//删去空行
//感谢博主https://blog.csdn.net/u014546553/article/details/53469447
int Remove_blankLine(string file)
{
    fstream targetFile(file,fstream::in | fstream::out);
    string line;//作为读取的每一行
    string temp;//作为缓存使用
    deque<string> noBlankLineQueue;//双向队列,只在队首和队尾操作时性能较好
    //判断文件是否打开
    if(!targetFile){
        cerr << "Can't Open File!" << endl;
        return EXIT_FAILURE;        
    }
    //记录文件开始位置
    auto StartPos = targetFile.tellp();
//循环读取判断文件的空行并放入队列
    while(getline(targetFile,line))
	{
        // cout << targetFile.tellg() << endl;   
        if(line.empty())
		{
            // cout << "the line is empty" << endl; 
        }
		else
		{
            
			// cout << "the last line is empty" << endl;   
            noBlankLineQueue.push_back(line);
        }   
    }
    targetFile.close(); 
    //使用ofstream打开再关闭文件是为了清空源文件
    ofstream emptyFile(file);
    emptyFile.close();
    //重新打开文本文件
    fstream target(file,fstream::out | fstream::in);
    if(!target){
        cerr << "Can't Open File" << endl;
    }
    //获取队首和队尾
    auto begin = noBlankLineQueue.begin();
    auto end = noBlankLineQueue.end();
    //遍历双向队列中的元素
    //并写回文件
    while(begin != end){
        temp = *begin;
        // cout << temp << endl;
        target << temp << endl; 
        ++begin;
    }
    target.close();
    return EXIT_SUCCESS;
}


//展示文件内容
void Show_all()
{
    ifstream OpenFile("D:\\College_File\\data.txt"); //打开文件
    // if (OpenFile.peek() == EOF)
    // {
    // cout << "file is empty."<<endl;
    // return 0;
    // }
    //ifstream表示“input file stream(输入文件流)”;用于读取文件
    string str; //储存单个
    int count = 0; //当其等于8的倍数时换行
    Show_table();

    while(OpenFile >> str)
    {
        count++;
        cout << setw(12) << str;
        if(count%8==0) cout << "\n"; //如果输出8个了，就换行
    }
    cout << "----------------------------------------------" << endl;
    OpenFile.close();//读取完成之后关闭文件
}
//用于解决字符排序(name等)
void Order_s(int ch)
{
    Show_table();
    //需要知道能不能将许多string放在一起比较，然后输出顺序
    //找到解决方法，字符串数组string name[5]={″Z″,″Li″,″Fun″,″Wang″,″Tan″};
    ifstream OpenFile("D:\\College_File\\data.txt");//打开

    vector<string> vec; //定义string型，名字vec
    string temp;//暂时存放一行的数据


    //利用getline()读取每一行，并按照行为单位放入到vector
    while (getline(OpenFile, temp))
    {
        vec.push_back(temp);//尾部插入
    }
        
    // vector <int> radius;//储存第一列
    string cha[10];
    int num_2 = 0;//cha数组    
            
    for (auto it = vec.begin(); it != vec.end(); it++) //auto将在编译时自动推导其类型，简化代码
    {
                
        istringstream is(*it);  //从string对象str中读取字符。                  
        //用每一行的数据初始化一个字符串输入流；
        string s;
        int pam = 0;
                
        while (is >> s)     //以空格为界，把istringstream中数据取出放入到依次s中
        {
            // is.get(); // 读取最后的回车符
            // if(is.peek() == '\n') break;
            if (pam == ch-1)   //获取第列的数据
        
            {
                // int r = atof(s.c_str()); //做数据类型转换，将string类型转换成int
                cha[num_2] = s;//放在数组里
                //cout << cha[num_2] << endl;//验证成功
                num_2++;

            }
            pam++;
        }
    }
    OpenFile.close();//关闭
    //到这里已经提取了名字的字符串数组cha[num_2]
    //下一步就是去重
    string l[num_2]; 
    int m = 0; // 记录当前l种到底存了多少个元素
    for(int id= 0; id < num_2; id++)
    {
        int js = 0;
        for(; js < m; js++)
        {
            if(cha[id] == l[js])
                break; // 找到相同的了
        }

        if(js == m) // 没有找到一个相同的
        { 
            l[m] = cha[id];
            m++;
        }
    }
    //得到了无重复的名字数组l[m]
    // for(int jq=0;jq<m;jq++)//验证成功
    // {
    //     cout << l[jq] << endl;
    // }   
    //不要小写下一步将无重复数组l[m]小写化
    //方法来自网址：https://blog.csdn.net/aerry_ale/article/details/81321963
    // string little[10];//用于存储小写无重复名字
    // int l_c = 0;//用于little[]
    // for(int xx=0;xx<m;xx++)
    // {
    //     transform(l[xx].begin(), l[xx].end(), l[xx].begin(), ::tolower);
    //     //cout << l[xx] << endl;//验证成功
        
    // }
    
    //利用冒泡排序
    int i_9,j_9;
    for(i_9=0;i_9<m;i_9++)
    {
        bool flag = false;
        for(j_9=m-1;j_9>i_9;j_9--)
        {
            if(l[j_9-1] > l[j_9])
            {
                string temp = l[j_9-1];
                l[j_9-1] = l[j_9];
                l[j_9] = temp;
                flag = true;
            }
        }
        if(flag == false)
            break;
    }
    //全部名字数组cha[num_2]
    //排好序无重复名字l[m]
    //现在找到相同名字的数组
    string same[10];
    int i_j = 0;//记录same
    for(int ii=0;ii<num_2;ii++)
    {
        for(int jj=ii+1;jj<num_2;jj++)
        {
            if(cha[ii]==cha[jj])
            {
                same[i_j] = cha[ii];
    
                i_j++;
            }
        }
    }
    // for(int jq=0;jq<m;jq++)//验证成功
    // {
    //     cout << same[jq] << endl;
    // } 
    //已经找到相同名字数组same[i_j]
    //下一步对same进行清重
    string q[i_j]; 
    int n = 0; // 记录当前l种到底存了多少个元素
    for(int id= 0; id < i_j; id++)
    {
        int js = 0;
        for(; js < n; js++)
        {
            if(same[id] == q[js])
                break; // 找到相同的了
        }

        if(js == n) // 没有找到一个相同的
        { 
            q[n] = same[id];
            n++;
        }
    }
    // for(int jq=0;jq<n;jq++)//验证成功
    // {
    //     cout << q[jq] << endl;
    // }   
    //无重复相同名字数组q[n] 
    //全部名字数组cha[num_2]
    //排好序无重复名字l[m]
    //下面就是老套路
    for(int st=0;st<m;st++)
    {
        int f1 = 0;
        //在不在相同数组里
        for(int s1=0;s1<n;s1++)
        {
            if(l[st]==q[s1])//如果是在相同组
            {
                f1 = 1;
                
            }
        }
        if(f1 == 1)
        {
            
            // cout << l[st] << endl;//验证成功，说明是能够过滤没有重复的
            //如何返回一个数组
            int *p;
            p = Row(l[st], ch);
            // int count_p = 0;//确定有效数字
            int i_s = 0;//用于ps
            int ps[10]; //存储该名字下的行数组
            //现在是想提取出指针中的有效数字
            for(int cp=0;cp<10;cp++)
            {
                if(cp>0&&*(p+cp)==0)
                {
                    break;
                }
                ps[i_s] = *(p+cp);
                // cout << ps[i_s] << endl;//验证成功
                i_s++;

            }



            //下一步就只是得到行数组的学号，进行冒泡排序，得到学号的顺序后按照这个依次调用查找学号的函数进行输出

            //定义一个函数*Get_id()，传入一个行数数组，然后得到一个学号数组
            int *pr;
            pr = Get_id(ps,i_s);
            //放入数组pa[]中，方便排序
            int i_a = 0;//用于pa
            int pa[10];
            for(int cp=0;cp<10;cp++)
            {
                if(cp>0&&*(pr+cp)==0)//如果第二个数字是0那么就是无效的数据
                {
                    break;
                }
                pa[i_a] = *(pr+cp);
                // cout << pa[i_a] << endl;//验证成功
                i_a++;

            }
            // cout << i_a << endl;
            //现在已经得到学号pa[i_a]，对其进行排序
            int i_8,j_8;
            for(i_8=0;i_8<i_a;i_8++)
            {
                bool flag = false;
                for(j_8=i_a-1;j_8>i_8;j_8--)
                {
                    if(pa[j_8-1] > pa[j_8])
                    {
                        int temp = pa[j_8-1];
                        pa[j_8-1] = pa[j_8];
                        pa[j_8] = temp;
                        flag = true;
                    }
                }
                if(flag == false)
                    break;
            }
            // for(int tt=0;tt<i_a;tt++)//验证成功，pa[i_a]已经将学号排好序
            // {
            //     cout << pa[tt] << endl;
            // }
            // 现在得到冒泡排序小到大的学号数组pa[i_a]
            // 下一步就是根据学号输出整行的数据
            for(int ids=0;ids<i_a;ids++)
            {
                Search_id(pa[ids]);
                cout << "\n";//输出一个换行
            }


        }


        if(f1==0)  
        {
            int *pr1;//存储行数据，只有一个
            pr1 = Row(l[st], ch);
            // 放入数组pa[]中，方便排序
            // int i_b = 0;//用于pb
            // int pb[10];
            // for(int cp=0;cp<10;cp++)
            // {
            //     if(cp>0&&*(pr1+cp)==0)//如果第二个数字是0那么就是无效的数据
            //     {
            //         break;
            //     }
            //     pb[i_b] = *(pr1+cp);
            //     // cout << pb[i_b] << endl;//验证成功
            //     i_b++;

            // }
            // cout << *(pr1+0) << endl;//验证成功
            RowShow(*(pr1+0));
        }
            
        

    }

    
}
//用于解决数字排序(age等)
void Order_d(int ch)
{
    ifstream OpenFile("D:\\College_File\\data.txt");//打开

    vector<string> vec; //定义string型，名字vec
    string temp;//暂时存放一行的数据

    //利用getline()读取每一行，并按照行为单位放入到vector
    while (getline(OpenFile, temp))
    {
        vec.push_back(temp);//尾部插入
    }
        
    // vector <int> radius;//储存第一列
    int cha_0[10];
    int num_3 = 0;//cha数组    
            
    for (auto it = vec.begin(); it != vec.end(); it++) //auto将在编译时自动推导其类型，简化代码
    {
                
        istringstream is(*it);  //从string对象str中读取字符。                  
        //用每一行的数据初始化一个字符串输入流；
        string s;
        int pam = 0;
                
        while (is >> s)     //以空格为界，把istringstream中数据取出放入到依次s中
        {
            is.get(); // 读取最后的回车符
            if(is.peek() == '\n') break;
            if (pam == ch-1)   //获取第列的数据
        
            {
                int r = atof(s.c_str()); //做数据类型转换，将string类型转换成int
                cha_0[num_3] = r;//放在数组里
                // cout << cha_0[num_3] << endl;
                num_3++;

            }
            pam++;
        }
    }
    OpenFile.close();

    //将重复项踢掉
    int l[num_3]; 
    int m = 0; // 记录当前l种到底存了多少个元素
    for(int id= 0; id < num_3; id++)
    {
        int js = 0;
        for(; js < m; js++)
        {
            if(cha_0[id] == l[js])
                break; // 找到相同的了
        }

        if(js == m) // 没有找到一个相同的
        { 
            l[m] = cha_0[id];
            m++;
        }
    }   
    //冒泡排序,小到大
    int i_7,j_7;
    for(i_7=0;i_7<m;i_7++)
    {
        bool flag = false;
        for(j_7=m-1;j_7>i_7;j_7--)
        {
            if(l[j_7-1] > l[j_7])
            {
                int temp = l[j_7-1];
                l[j_7-1] = l[j_7];
                l[j_7] = temp;
                flag = true;
            }
        }
        if(flag == false)
            break;
    }
    // for(int sw=0;sw<m;sw++)//验证成功
    // {
    //     cout << l[sw] << endl;
    // }
    //现在已经把需要排序的age找到并排好序了，需要分类 有重复和没有重复，还是需要保存重复年龄下的行数，\
    //利用行数对其排序，注意还是要按照年龄来
    //无重复年龄数组l[m]
    //原数组cha_0[num_3]
    

    Show_table();


    //找到有重复项的年龄
    int same[10];
    int i_j = 0;//记录same
    for(int ii=0;ii<num_3;ii++)
    {
        for(int jj=ii+1;jj<num_3;jj++)
        {
            if(cha_0[ii]==cha_0[jj])
            {
                same[i_j] = cha_0[ii];
    
                i_j++;
            }
        }
    }

        //将same中相同的删去,存放在q[n]中
    int q[i_j]; 
    int n = 0; // 记录当前l种到底存了多少个元素
    for(int id= 0; id < i_j; id++)
    {
        int js = 0;
        for(; js < n; js++)
        {
            if(same[id] == q[js])
                break; // 找到相同的了
        }

        if(js == n) // 没有找到一个相同的
        { 
            q[n] = same[id];
            n++;
        }
    }   

    //q[n]存放有相同年龄，无重复，检查无误
    //l[m]存放全部年龄，无重复,检查无误，有序

    for(int st=0;st<m;st++)
    {
        int f1 = 0;
        //在不在相同数组里
        for(int s1=0;s1<n;s1++)
        {
            if(l[st]==q[s1])//如果是在相同组
            {
                f1 = 1;
                
            }
        }
        if(f1 == 1)
        {
            string str = to_string (l[st]);
            // cout << str << endl;验证成功，说明是能够过滤没有重复的年龄
            //如何返回一个数组
            int *p;
            p = Row(str, ch);//传进去没有问题，传出来有问题
            // int count_p = 0;//确定有效数字
            int i_s = 0;//用于ps
            int ps[10]; //存储该年龄下的行数组
            //现在是想提取出指针中的有效数字
            for(int cp=0;cp<10;cp++)
            {
                if(cp>0 && *(p+cp)==0)
                {
                    break;
                }
                ps[i_s] = *(p+cp);
                // cout << ps[i_s] << endl;//验证成功
                i_s++;

            }
            

            
            //下一步就只是得到行数组的学号，进行冒泡排序，得到学号的顺序后按照这个依次调用查找学号的函数进行输出

            //定义一个函数*Get_id()，传入一个行数数组，然后得到一个学号数组
            int *pr;
            pr = Get_id(ps,i_s);
            //放入数组pa[]中，方便排序
            int i_a = 0;//用于pa
            int pa[10];
            for(int cp=0;cp<10;cp++)
            {
                if(cp>0&&*(pr+cp)==0)//如果第二个数字是0那么就是无效的数据
                {
                    break;
                }
                pa[i_a] = *(pr+cp);
                // cout << pa[i_a] << endl;//验证成功
                i_a++;

            }
            // cout << i_a << endl;
            //现在已经得到学号pa[i_a]，对其进行排序
            int i_9,j_9;
            for(i_9=0;i_9<i_a;i_9++)
            {
                bool flag = false;
                for(j_9=i_a-1;j_9>i_9;j_9--)
                {
                    if(pa[j_9-1] > pa[j_9])
                    {
                        int temp = pa[j_9-1];
                        pa[j_9-1] = pa[j_9];
                        pa[j_9] = temp;
                        flag = true;
                    }
                }
                if(flag == false)
                    break;
            }
            // for(int tt=0;tt<i_a;tt++)//验证成功，pa[i_a]已经将学号排好序
            // {
            //     cout << pa[tt] << endl;
            // }
            //现在得到冒泡排序小到大的学号数组pa[i_a]
            //下一步就是根据学号输出整行的数据
            for(int ids=0;ids<i_a;ids++)
            {
                Search_id(pa[ids]);
                cout << "\n";//输出一个换行
            }
            
            
        }
        if(f1==0)//没有相同年龄的人
        {

            string str = to_string (l[st]);
            int *pr1;//存储行数据，只有一个
            pr1 = Row(str, ch);
            // cout << *(pr1+0) << endl;//验证成功
            RowShow(*(pr1+0));
            
        }
    
    }
    
}   
//已知行数，输出该行数据
void RowShow(int row)
{
    ifstream OpenFile("D:\\College_File\\data.txt");//打开
    vector<string> vec; //定义string型，名字vec
    string temp;//暂时存放一行的数据

    //利用getline()读取每一行，并按照行为单位放入到vector
    while (getline(OpenFile, temp))
    {
        vec.push_back(temp);//尾部插入
    }

    // vector <int> radius;
    OpenFile.close();

    int it_2 = 0;
    // int s_2 = 0;
    
    for (auto it = vec.begin(); it != vec.end(); it++) //auto将在编译时自动推导其类型，简化代码
    {
        //cout << *it << endl;
        istringstream is(*it);  //从string对象str中读取字符。                  
        //用每一行的数据初始化一个字符串输入流；
        string s;
        
        
        
        if(it_2 == row)
        {
            while(is >> s) 
            {
                cout << setw(12) << s;
                // is.get(); // 读取最后的回车符
                // if(is.peek() == '\n') break;
            }
            cout << "\n";
            // s_2++;
        }
        it_2++;
    }
    
}
//将行数数组传进去，得到相应的学号数组
int *Get_id(const int line[],int size)
{
    int i = 0;
    string str;
    static int id[10];
    int count = 0;
    ifstream OpenFile("D:\\College_File\\data.txt");//打开
    while(OpenFile >> str)
    {
        
        if(count == line[i]*8)
        {
            
            stringstream stream;
            //定义一个新数组id[]，传出一个
            stream << str;
            stream >> id[i];
            // OpenFile.get(); // 读取最后的回车符
            // if(OpenFile.peek() == '\n') break;
            
            i++;
            
        }
        if(i>=size)//如果找完了
        {
            break;
        }
        count++;
    }
    OpenFile.close();
    return id;
}
//记录行数,传入的是string型
int *Row(string data, int c)
{
    int count = 0;
    int i_0 = 0;//用于r
    static int r[10];
    

    string str;
    ifstream OpenFile("D:\\College_File\\data.txt");//打开
    while(OpenFile >> str)
    {
        if(str == data )
        {
            // OpenFile.get(); // 读取最后的回车符
            // if(OpenFile.peek() == '\n') break;
            r[i_0] = count;
            i_0++;
        }
        count++;
    }
    
    for(int s=0;s<i_0;s++)
    {
        r[s]=(r[s]-c+1)/8;
        // cout << r[s] << endl;//验证成功，能够输出正确的行
        // cout << R[s] << endl;
        // cout << num[s] << endl;
        
    }

    // cout << sizeof(r)/4 << endl;
    OpenFile.close();
    return r;
}

//展示表头
void Show_table()
{
    cout << "----------------------------------------------"<< endl;
    cout << setw(12) << "ID" << setw(12) << "name" << setw(12) << "age" \
        << setw(12) << "sex" << setw(12) << "birth" \
        << setw(12) << "address" << setw(12) << "telephone" << setw(12) << "E-mail" << endl; 
}

// 已知ID找到整行数据
void Search_id(int data)
{
    ifstream OpenFile("D:\\College_File\\data.txt");//打开

    
    vector<string> vec; //定义string型，名字vec
    string temp;//暂时存放一行的数
     //利用getline()读取每一行，并按照行为单位放入到vector
    while (getline(OpenFile, temp))
    {
        vec.push_back(temp);//尾部插入
    }
    
    for (auto it = vec.begin(); it != vec.end(); it++) //auto将在编译时自动推导其类型，简化代码
    {
                            
        istringstream is(*it);  //从string对象str中读取字符。                  
        //用每一行的数据初始化一个字符串输入流；
        string s;
        int pam = 0;
                            
        while (is >> s)     //以空格为界，把istringstream中数据取出放入到依次s中
        {
            if (pam == 0)   //获取第1列的数据
                    
            {
                int r = atof(s.c_str()); //做数据类型转换，将string类型转换成int
                                    // radius.push_back(r);
                if(r == data)
                {
                    int count = 0;
                    cout << setw(12) << data; 
                    string str;
                    while (is >> str)
                    {
                        count++;
                        cout << setw(12) << str;
                        if(count%8==0) cout << "\n"; //如果输出8个了，就换行
                        // is.get(); // 读取最后的回车符
                        // if(is.peek() == '\n') break;
                    }
                                        
                }
            
            }
            pam++;
            
        }
    }
    OpenFile.close();
}

//查找ID以外的其他数据name等，该部分不用于功能2
//已知查找的人的信息，输出该行，失败：同理这样可以已知要删除的人的信息，不输出该行。
void Search_data(string data,int c)
{

    int count = 0;
    
    int num[10];
    int i_0 = 0;

    string str;
    ifstream OpenFile("D:\\College_File\\data.txt");//打开
    while(OpenFile >> str)
    {
        if(str == data)
        {
            
            num[i_0] = count;
            i_0++;
        }
        count++;
    }
    // cout << i_0 << endl;
    //将num转成是第几行
    for(int s=0;s<i_0;s++)
    {
        num[s]=(num[s]-c+1)/8;
        // cout << num[s] << endl;
    }
    OpenFile.clear();
    OpenFile.seekg(0,ios::beg);
    vector<string> vec; //定义string型，名字vec
    string temp;//暂时存放一行的数据

    //利用getline()读取每一行，并按照行为单位放入到vector
    while (getline(OpenFile, temp))
    {
        vec.push_back(temp);//尾部插入
    }
    OpenFile.close();
    // vector <int> radius;
    
    int it_2 = 0;//行
    int s_2 = 0;
    for (auto it = vec.begin(); it != vec.end(); it++) //auto将在编译时自动推导其类型，简化代码
    {
        //cout << *it << endl;
        istringstream is(*it);  //从string对象str中读取字符。                  
        //用每一行的数据初始化一个字符串输入流；
        string s;
        
        
        
        if(it_2 == num[s_2] && s_2<i_0)
        {
            while(is >> s) 
            {
                cout << setw(12) << s;
                
            }
            cout << "\n";
            s_2++;
        }
        it_2++;
    }

    
}
//全局变量
int judge; //输入的数字,选择功能,害怕被改变

//选择功能
void choose_func()
{
	cout<<"Enter '1' to log data"<<endl; //录入
	cout<<"Enter '2' to show data"<<endl; //浏览
	cout<<"Enter '3' to seek data"<<endl; //查找
    cout<<"Enter '4' to order data"<<endl; //排序
    cout<<"Enter '5' to delete data"<<endl; //删除
	cout<<"Enter '6' to change data"<<endl; //修改
	cout<<"Enter  function number:"; cin>>judge; //输入功能
}

int main()
{
    //TODO:问题是录入进去后，排序功能会出错.\
    失败：现在准备将原文件覆盖
    int i=1;
    cout << left; //规定左对齐
    
    while(i)//能够一直呆在程序里
    {
        //0.选择需要的功能("系统以菜单方式工作")
        choose_func();

        //输入不规范
        if(judge!=1 && judge!=2 && judge!=3 && judge!=4 && judge!=5 && judge!=6 ) 
		{
			cout << "Error !\nPlease enter '1/2/3/4/5/6' to choose function " << endl;
			continue;
		}
        //TODO:1.录入功能（学生信息用文件保存）"
        if(judge==1)
        {
            int num; //需要录入的人数
            fstream OutFile("D:\\College_File\\data.txt",ios::app);
            //从文件末尾开始写，防止丢失文件中原来就有的内容
            cout << "How many people you want to log:"; cin >> num;
            for(int j_1=0;j_1<num;j_1++)
            {
                string id,name,age,birth,sex,ad,tele,email ;

                if(num>1)//一个的时候不用输出第几个
                {
                    printf("Enter %d information \n",j_1+1);
                }
                    cout << "1.ID:"; cin >> id;
                    cout << "2.name:"; cin >> name;
                    cout << "3.age:"; cin >> age;
                    cout << "4.birth:"; cin >> birth;
                    cout << "5.sex(F/M):"; cin >> sex;
                    cout << "6.address:"; cin >> ad;
                    cout << "7.telephone:"; cin >> tele;
                    cout << "8.E-mail:"; cin >> email;
                    
                    OutFile << "\n" << id << "  " << name << "      " << age << "  "\
                    << sex << "  " << birth << "  " << ad << "  " << tele << " " << email;
                
            }
            OutFile.close();
            
            
            Remove_blankLine("D:\\College_File\\data.txt");
        }
        

        //TODO:2.浏览功能
        if(judge==2)
        {
            
            Show_all();
            cout << "show finish!" << endl;
        }
        //TODO:3.查询
        if(judge==3)
        {
            
            int j_3 = 1;
            while(j_3)
            {
                
                int ch=1;//默认选择1
                cout << "How do you want to look for?" << endl;
                cout << "1.ID" << endl;
                cout << "2.name" << endl;
                
                cout << "Enter your choice:"; cin >> ch;

                //选择id查找
                if(ch==1)
                {
                    int j_3_1 = 1; //判断什么时候退出查找
                    while(j_3_1)
                    {
                        //失败：想要的功能就是 能够先读取数据将其放在二维数组里，然后与输入的\
                        进行比较，得到相应的人，然后输出，
                        //失败：然后想的是以ID查找就用int型，将所有的ID放在一个一维数组里,然后与输入比较得到是第几行\
                        利用与8的倍数关系，找到该行并输出整行，
                        ifstream OpenFile("D:\\College_File\\data.txt");//打开
                        string sc_id;
                        int f = 0;//判断有没有这个人
                        cout << "His/Her id ?"; cin >> sc_id;
                        //把学号数据放入动态数组radius中
                        vector<string> vec; //定义string型，名字vec
                        string temp;//暂时存放一行的数据
                        Show_table();
                        //利用getline()读取每一行，并按照行为单位放入到vector
                        while (getline(OpenFile, temp))
                        {
                            vec.push_back(temp);//尾部插入
                        }
                    
                        // vector <int> radius;
                    
                        
                        for (auto it = vec.begin(); it != vec.end(); it++) //auto将在编译时自动推导其类型，简化代码
                        {
                            //cout << *it << endl;
                            istringstream is(*it);  //从string对象str中读取字符。                  
                            //用每一行的数据初始化一个字符串输入流；
                            string s;
                            int pam = 0;
                            
                            while (is >> s)     //以空格为界，把istringstream中数据取出放入到依次s中
                            {
                                if (pam == 0)   //获取第1列的数据
                    
                                {
                                    // int r = atof(s.c_str()); //做数据类型转换，将string类型转换成int
                                    // radius.push_back(r);
                                    if(s == sc_id)
                                    {
                                        f = 1;//代表找到了
                                        

                                        int count = 0;
                                        cout << setw(12) << sc_id; 
                                        while (is >> s)
                                        {
                                            count++;
                                            cout << setw(12) << s;
                                            if(count%8==0) cout << "\n"; //如果输出8个了，就换行
                                        }
                                        
                                    }
                                    
                                }
                                pam++;
                            }
                        }
                        //如果没找到
                        if(f == 0)
                        {
                            cout << "Not found!" << endl;
                        }
                        OpenFile.close();//读取完成之后关闭文件
                        

                        cout << " \nExit seach?(yes/0;no/1)"; cin >> j_3_1;
                        
                    }
                }

                //如果选择name查找
                if(ch == 2)
                {
                    
                    int j_3_2 = 1;
                    while(j_3_2)
                    {
                        int f = 0;//判断有没有这个人
                        int count = 0;
                        string sc_name;//找的名字
                        int num[10];
                        int i_0 = 0;
                        cout << "His/Her name ?"; cin >> sc_name;
                        string str;
                        ifstream OpenFile("D:\\College_File\\data.txt");//打开
                        while(OpenFile >> str)
                        {
                            if(str == sc_name)
                            {
                                f = 1;
                                num[i_0] = count;
                                i_0++;
                            }
                            count++;
                        }
                        // cout << i_0 << endl;
                        //将num转成是第几行
                        for(int s=0;s<i_0;s++)
                        {
                            num[s]=(num[s]-1)/8;
                            // cout << num[s] << endl;
                        }
                        OpenFile.clear();
                        OpenFile.seekg(0,ios::beg);
                        vector<string> vec; //定义string型，名字vec
                        string temp;//暂时存放一行的数据

                        //利用getline()读取每一行，并按照行为单位放入到vector
                        while (getline(OpenFile, temp))
                        {
                            vec.push_back(temp);//尾部插入
                        }
                    
                        // vector <int> radius;
                        Show_table();

                        int it_2 = 0;
                        int s_2 = 0;
                        for (auto it = vec.begin(); it != vec.end(); it++) //auto将在编译时自动推导其类型，简化代码
                        {
                            //cout << *it << endl;
                            istringstream is(*it);  //从string对象str中读取字符。                  
                            //用每一行的数据初始化一个字符串输入流；
                            string s;
                            
                            
                            
                            if(it_2 == num[s_2])
                            {
                                while(is >> s) 
                                {
                                    cout << setw(12) << s;
                                    
                                }
                                cout << "\n";
                                s_2++;
                            }
                            it_2++;
                        }

                        OpenFile.close();

                        //如果没找到
                        if(f == 0)
                        {
                            cout << "Not found!" << endl;
                        }
                        
                        cout << "\nExit this way of search?(yes/0;no/1)"; cin >> j_3_2;
                    }
                    
                }
                cout << "\nExit search?(yes/0;no/1)"; cin >> j_3;
            }
            
        }
        //TODO:4.排序
        if(judge == 4)
        {
            int j_4 = 1;
            while(j_4)
            {
                // Remove_blankLine("D:\\College_File\\data.txt");
                
                int ch; //选择排序方式
                cout << "Choose way:" << endl;
                cout << "1.ID\n" << "2.name\n" << "3.age\n" << "4.sex\n" << "5.birth\n" \
                    << "6.address\n" << "7.telephone\n" << "8.E-mail\n" << endl;
                cin >> ch;
                //1.ID
                if(ch == 1)
                {
                    ifstream OpenFile("D:\\College_File\\data.txt");//打开
                    
                
                    vector<string> vec; //定义string型，名字vec
                    string temp;//暂时存放一行的数据

                    //利用getline()读取每一行，并按照行为单位放入到vector
                    while (getline(OpenFile, temp))
                    {
                        vec.push_back(temp);//尾部插入
                    }
                        
                    // vector <int> radius;//储存第一列
                    int cha[10];
                    int num_2 = 0;//cha数组    
                            
                    for (auto it = vec.begin(); it != vec.end(); it++) //auto将在编译时自动推导其类型，简化代码
                    {
                                
                        istringstream is(*it);  //从string对象str中读取字符。                  
                        //用每一行的数据初始化一个字符串输入流；
                        string s;
                        int pam = 0;
                                
                        while (is >> s)     //以空格为界，把istringstream中数据取出放入到依次s中
                        {
                            if (pam == 0)   //获取第1列的数据
                        
                            {
                                int r = atof(s.c_str()); //做数据类型转换，将string类型转换成int
                                cha[num_2] = r;//放在数组里
                                // cout << cha[num_2] << endl;
                                num_2++;

                            }
                            pam++;
                        }
                    }
                    
                    //冒泡排序,小到大
                    int i_3,j_3;
                    for(i_3=0;i_3<num_2;i_3++)
                    {
                        bool flag = false;
                        for(j_3=num_2-1;j_3>i_3;j_3--)
                        {
                            if(cha[j_3-1] > cha[j_3])
                            {
                                int temp = cha[j_3-1];
                                cha[j_3-1] = cha[j_3];
                                cha[j_3] = temp;
                                flag = true;
                            }
                        }
                        if(flag == false)
                            break;
                    }
                    // cout << "\n";
                    // for(int i_5=0;i_5<num_2;i_5++)
                    // {
                    //     cout << cha[i_5] << endl;
                    // }
                    Show_table();
                    OpenFile.close();
                    
                    for(int i_6=0;i_6<num_2;i_6++)
                    {
                        Search_id(cha[i_6]);
                        cout << "\n";
                    }
                }
            


                //2.name
                //和后面的sex,address,E-mail是一样
                //和age不同的是数据类型，还有就是字符比较，先将他们全化为小写字母，再进行比较(ASCII)
                //因为名字也可能相同，所以要查重，按学号小到大排序
                //sex只有两种情况(F女,M男)
                //address会重(家人)
                //E-mail不会重
                if(ch == 2)
                {
                    Order_s(ch);
                    // //需要知道能不能将许多string放在一起比较，然后输出顺序
                    // //找到解决方法，字符串数组string name[5]={″Z″,″Li″,″Fun″,″Wang″,″Tan″};
                    
                }

                //3.age
                //和后面的birth,telephone一样,看能不能用一个函数表示
                if(ch == 3)
                {
                    Order_d(ch);
                }
                
                //4.sex
                if(ch == 4)
                {
                    Order_s(ch);
                }
                //5.birth
                if(ch == 5)
                {
                    Order_d(ch);
                }
                
                //6.address
                if(ch == 6)
                {
                    Order_s(ch);
                }
                //7.telephone
                if(ch == 7)
                {
                    Order_d(ch);
                }
                //8.E-mail
                if(ch == 8)
                {
                    Order_s(ch);
                }
                
                cout << "Exit order?(yes/0;no/1)"; cin >> j_4;
            }
        }
        //TODO:5.删除
        //按照学号删除
        //忽略该行，输出其他的数据到一个新数组，然后覆盖原文件
        if(judge == 5)
        {
            int j_5 = 1;
            while(j_5)
            {
                Show_all();
                string de_id;
                cout << "Which one you want to delete?Enter his/her id:"; cin >> de_id;
                //接下来需要得到该id所在行
                int de_hang;//行
                int de_count=0;//记录元素数
                ifstream OpenFile("D:\\College_File\\data.txt");//打开
                string str;
                while(OpenFile >> str)
                {
                    if(str == de_id)
                    {
                        break;
                    }
                    de_count++;
                }
                //到这里文件读取了一部分了，所以必须回到文件开头
                OpenFile.clear();
                OpenFile.seekg(0,ios::beg);
                // cout << de_count << endl;//验证成功
                de_hang = de_count/8;
                
                string line;
                int  count = 0;
                ofstream OutFile("D:\\College_File\\new_data.txt", ios::out | ios::trunc);
                
                while (!OpenFile.eof()) 
                {
                    getline(OpenFile, line);
                    if (count != de_hang)//如果不是要删除的行，那么保存在临时文件里
                        OutFile << line << endl;
                    count++;
                    OpenFile.get(); // 读取最后的回车符
                    if(OpenFile.peek() == '\n') break;
                }
                OutFile.close();
                OpenFile.close();
                ofstream OutFile1("D:\\College_File\\data.txt", ios::out | ios::trunc);
                //有重名的就将其清空。然后加入临时文件的内容，类似覆盖
                fstream OpenFile1("D:\\College_File\\new_data.txt");
                while (!OpenFile1.eof()) 
                {
                    getline(OpenFile1, line);
                    OutFile1 << line << endl;
                }
                OutFile1.close();
                OpenFile1.close();
                system("del D:\\College_File\\new_data.txt");//删除临时文件
                // Show_table();
                OpenFile.close();
                Remove_blankLine("D:\\College_File\\data.txt");
                cout << "Exit delete?(yes/0;no/1)"; cin >> j_5;
            }
            
        }
        //TODO:6.修改
        //问题是修改后，在最后插入的一行会隔行，可能是因为删去一行后末尾留下一行的空白
        //需要删去空行
        if(judge==6)
        {
            int j_6 = 1;
            while(j_6)//判断修改功能结束
            {
                //初步想法是先利用要修改的学号，找到行，
                //能够找到行，保存在临时的一个字符串数组同时删除该行，需要用户选择要修改的是什么，\
                以使用循环，或者函数，修改多个信息(name等，不考虑学号，假设学号都不一样)，\
                //下一步更新这个字符串数组，，那么可以将这一行加在文件末尾
                //此时可以显示所有的人，让用户好选择要修改的id
                Show_all();
                string ch_id;//需要修改的人的ID号
                cout << "WHich one you want to change? \nEnter her/his id:"; cin >> ch_id;
                //现在已知了id号，那么找到行，保存在字符串数组，再删除(利用功能删除)
                //找行ch_hang
                int ch_hang;//行
                int ch_count=0;//记录元素数
                ifstream OpenFile("D:\\College_File\\data.txt");//打开
                string str;
                while(OpenFile >> str)
                {
                    if(str == ch_id)//找到所在的count
                    {
                        break;
                    }
                    ch_count++;
                }
                //到这里文件读取了一部分了，所以必须回到文件开头
                OpenFile.clear();
                OpenFile.seekg(0,ios::beg);
                // cout << ch_count << endl;//验证成功
                ch_hang = ch_count/8;
                //已知行数ch_hang,找到这一行的数据保存在数组ch_h里，该数组名还不能和ch_hang相同
                string ch_h[10];//保存该行所有数据
                int ch_data = 0;//用于ch_h
                vector<string> vec; //定义string型，名字vec
                string temp;//暂时存放一行的数据

                //利用getline()读取每一行，并按照行为单位放入到vector
                while (getline(OpenFile, temp))
                {
                    vec.push_back(temp);//尾部插入
                }

                int it_2 = 0;//用于计算遍历到哪一行
                
                for (auto it = vec.begin(); it != vec.end(); it++) //auto将在编译时自动推导其类型，简化代码
                {
                    //cout << *it << endl;
                    istringstream is(*it);  //从string对象str中读取字符。                  
                    //用每一行的数据初始化一个字符串输入流；
                    string s;
                    if(it_2 == ch_hang)//等于行数
                    {
                        while(is >> s) //遍历该行，将其保存
                        {
                            ch_h[ch_data] = s;
                            ch_data++;
                            
                        }
                        
                        
                    }
                    it_2++;
                }
                //成功：验证数组里是否有正确的数据
                // for(int i=0;i<ch_data;i++)
                // {
                //     cout << ch_h[i] << endl;
                // }
                //还没有关闭OpenFile
                OpenFile.clear();
                OpenFile.seekg(0,ios::beg);
                //删除要修改的这一行，利用功能删除
                int de_hang = ch_hang;//行
                // int de_count=0;//记录元素数
                

                
                string line;
                int  count = 0;
                ofstream OutFile("D:\\College_File\\new_data.txt", ios::out | ios::trunc);
                
                while (!OpenFile.eof()) 
                {
                    getline(OpenFile, line);
                    if (count != de_hang)//如果不是要删除的行，那么保存在临时文件里
                        OutFile << line << endl;
                    count++;
                }
                OutFile.close();
                OpenFile.close();
                ofstream OutFile1("D:\\College_File\\data.txt", ios::out | ios::trunc);
                //有重名的就将其清空。然后加入临时文件的内容，类似覆盖
                fstream OpenFile1("D:\\College_File\\new_data.txt");
                while (!OpenFile1.eof()) 
                {
                    getline(OpenFile1, line);
                    OutFile1 << line << endl;
                }
                OutFile1.close();
                OpenFile1.close();
                system("del D:\\College_File\\new_data.txt");//删除临时文件

                OpenFile.close();
                //删除文件空行，这样不会让排序出问题
                Remove_blankLine("D:\\College_File\\data.txt");
                //到这里实现了删除要修改的行，下一步就是输入新数据，需要选择
                //先给用户看一下原数据
                Show_table();
                for(int i=0;i<ch_data;i++)
                {
                    cout << setw(12) << ch_h[i];
                }
                //让用户选择要修改的数据
                int choice = 1;//
                while(choice)
                {
                    cout << "\nWhich one you want to change:" << endl;
                    cout << "0.Quit!\n1.ID\n2.name\n3.age\n4.sex\n5.birth\n6.address\n7.telephone\n8.E-mail\n";
                    cin >> choice;
                    if(choice == 0)
                        break;
                    
                    string table[8] = {"ID", "name", "age", "sex", "birth", "address", "telephone", "E-mail"};
                    
                    //开始修改
                    string new_data;
                    cout << "New " << table[choice-1] << ":";  cin >> new_data; 
                    ch_h[choice-1] = new_data;
                    //看一下修改的效果
                    Show_table();
                    for(int i=0;i<ch_data;i++)
                    {
                        cout << setw(12) << ch_h[i];
                    }
                }
                //问题是一运行就会清空data，不是很能懂\
                现在就好了，已经删除修改行
                //下一步在最后插入新的一行数据
                ofstream LastFile("D:\\College_File\\data.txt", ios::app);//添加至文件尾部，不刷新文件
                // Remove_blankLine("D:\\College_File\\data.txt");
                for(int i=0;i<ch_data;i++)
                {
                    LastFile << ch_h[i] << "\t";
                }
                LastFile.close();
                
                //判断退出修改
                cout << "\nExit change?(yes/0;no/1)"; cin >> j_6;

            }
            
        }

        // 判断是否退出程序
        cout << "Exit project?(yes/0;no/1)"; cin >> i ;
    }
    cout << "Exit success!" << endl;
    return 0;
}