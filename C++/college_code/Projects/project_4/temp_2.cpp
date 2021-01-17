                //     ifstream OpenFile("C:\\Users\\lijiayan\\Desktop\\data.txt");//打开
                    
                            
                            
                            
                //     vector<string> vec; //定义string型，名字vec
                //     string temp;//暂时存放一行的数据

                //     //利用getline()读取每一行，并按照行为单位放入到vector
                //     while (getline(OpenFile, temp))
                //     {
                //         vec.push_back(temp);//尾部插入
                //     }
                        
                //     // vector <int> radius;//储存第一列
                //     int cha_0[10];
                //     int num_3 = 0;//cha数组    
                            
                //     for (auto it = vec.begin(); it != vec.end(); it++) //auto将在编译时自动推导其类型，简化代码
                //     {
                                
                //         istringstream is(*it);  //从string对象str中读取字符。                  
                //         //用每一行的数据初始化一个字符串输入流；
                //         string s;
                //         int pam = 0;
                                
                //         while (is >> s)     //以空格为界，把istringstream中数据取出放入到依次s中
                //         {
                //             if (pam == 2)   //获取第3列的数据
                        
                //             {
                //                 int r = atof(s.c_str()); //做数据类型转换，将string类型转换成int
                //                 cha_0[num_3] = r;//放在数组里
                //                 // cout << cha_0[num_3] << endl;
                //                 num_3++;

                //             }
                //             pam++;
                //         }
                //     }
                //     //将重复项踢掉
                //     int l[num_3]; 
                //     int m = 0; // 记录当前l种到底存了多少个元素
                //     for(int id= 0; id < num_3; id++)
                //     {
                //         int js = 0;
                //         for(; js < m; js++)
                //         {
                //             if(cha_0[id] == l[js])
                //                 break; // 找到相同的了
                //         }

                //         if(js == m) // 没有找到一个相同的
                //         { 
                //             l[m] = cha_0[id];
                //             m++;
                //         }
                //     }   
                //     //冒泡排序,小到大
                //     int i_7,j_7;
                //     for(i_7=0;i_7<m;i_7++)
                //     {
                //         bool flag = false;
                //         for(j_7=m-1;j_7>i_7;j_7--)
                //         {
                //             if(l[j_7-1] > l[j_7])
                //             {
                //                 int temp = l[j_7-1];
                //                 l[j_7-1] = l[j_7];
                //                 l[j_7] = temp;
                //                 flag = true;
                //             }
                //         }
                //         if(flag == false)
                //             break;
                //     }
                //     // for(int sw=0;sw<m;sw++)//验证成功
                //     // {
                //     //     cout << l[sw] << endl;
                //     // }
                //     //现在已经把需要排序的age找到并排好序了，需要分类 有重复和没有重复，还是需要保存重复年龄下的行数，\
                //     //利用行数对其排序，注意还是要按照年龄来
                //     //无重复年龄数组l[m]
                //     //原数组cha_0[num_3]
                    

                //     Show_table();


                //     //找到有重复项的年龄
                //     int same[10];
                //     int i_j = 0;//记录same
                //     for(int ii=0;ii<num_3;ii++)
                //     {
                //         for(int jj=ii+1;jj<num_3;jj++)
                //         {
                //             if(cha_0[ii]==cha_0[jj])
                //             {
                //                 same[i_j] = cha_0[ii];
                    
                //                 i_j++;
                //             }
                //         }
                //     }

                //      //将same中相同的删去,存放在q[n]中
                //     int q[i_j]; 
                //     int n = 0; // 记录当前l种到底存了多少个元素
                //     for(int id= 0; id < i_j; id++)
                //     {
                //         int js = 0;
                //         for(; js < n; js++)
                //         {
                //             if(same[id] == q[js])
                //                 break; // 找到相同的了
                //         }

                //         if(js == n) // 没有找到一个相同的
                //         { 
                //             q[n] = same[id];
                //             n++;
                //         }
                //     }   
    
                //     //q[n]存放有相同年龄，无重复，检查无误
                //     //l[m]存放全部年龄，无重复,检查无误

                //     for(int st=0;st<m;st++)
                //     {
                //         int f1 = 0;
                //        //在不在相同数组里
                //         for(int s1=0;s1<n;s1++)
                //         {
                //             if(l[st]==q[s1])//如果是在相同组
                //             {
                //                 f1 = 1;
                                
                //             }
                //         }
                //         if(f1 == 1)
                //         {
                //             string str = to_string (l[st]);
                //             // cout << str << endl;验证成功，说明是能够过滤没有重复的年龄
                //             int *p;
                //             p = Row(str, ch);//传进去没有问题，传出来有问题
                //             int count_p = 0;//确定有效数字
                //             int i_s = 0;//用于ps
                //             int ps[10]; //存储该年龄下的行数组
                //             //现在是想提取出指针中的有效数字
                //             for(int cp=0;cp<10;cp++)
                //             {
                //                 if(cp>0&&*(p+cp)==0)
                //                 {
                //                     break;
                //                 }
                //                 ps[i_s] = *(p+cp);
                //                 // cout << ps[i_s] << endl;//验证成功
                //                 i_s++;

                //             }
                            

                            
                //             //下一步就只是得到行数组的学号，进行冒泡排序，得到学号的顺序后按照这个依次调用查找学号的函数进行输出

                //             //定义一个函数*Get_id()，传入一个行数数组，然后得到一个学号数组
                //             int *pr;
                //             pr = Get_id(ps,i_s);
                //             //放入数组pa[]中，方便排序
                //             int i_a = 0;//用于pa
                //             int pa[10];
                //             for(int cp=0;cp<10;cp++)
                //             {
                //                 if(cp>0&&*(pr+cp)==0)//如果第二个数字是0那么就是无效的数据
                //                 {
                //                     break;
                //                 }
                //                 pa[i_a] = *(pr+cp);
                //                 // cout << pa[i_a] << endl;//验证成功
                //                 i_a++;

                //             }
                //             // cout << i_a << endl;
                //             //现在已经得到学号pa[i_a]，对其进行排序
                //             int i_8,j_8;
                //             for(i_8=0;i_8<i_a;i_8++)
                //             {
                //                 bool flag = false;
                //                 for(j_8=i_a-1;j_8>i_8;j_8--)
                //                 {
                //                     if(pa[j_8-1] > pa[j_8])
                //                     {
                //                         int temp = pa[j_8-1];
                //                         pa[j_8-1] = pa[j_8];
                //                         pa[j_8] = temp;
                //                         flag = true;
                //                     }
                //                 }
                //                 if(flag == false)
                //                     break;
                //             }
                //             // for(int tt=0;tt<i_a;tt++)//验证成功，pa[i_a]已经将学号排好序
                //             // {
                //             //     cout << pa[tt] << endl;
                //             // }
                //             //现在得到冒泡排序小到大的学号数组pa[i_a]
                //             //下一步就是根据学号输出整行的数据
                //             for(int ids=0;ids<i_a;ids++)
                //             {
                //                 Search_id(pa[ids]);
                //                 cout << "\n";//输出一个换行
                //             }
                            
                            
                //         }
                //         if(f1==0)//没有相同年龄的人
                //         {

                //             string str = to_string (l[st]);
                //             int *pr1;//存储行数据，只有一个
                //             pr1 = Row(str, ch);
                //             // cout << *(pr1+0) << endl;//验证成功
                //             RowShow(*(pr1+0));
                            
                //         }
                    
                // }
                
                // OpenFile.close();