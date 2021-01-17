// ifstream OpenFile("C:\\Users\\lijiayan\\Desktop\\data.txt");//打开

    
//     vector<string> vec; //定义string型，名字vec
//     string temp;//暂时存放一行的数
//      //利用getline()读取每一行，并按照行为单位放入到vector
//     while (getline(OpenFile, temp))
//     {
//         vec.push_back(temp);//尾部插入
//     }
    
//     for (auto it = vec.begin(); it != vec.end(); it++) //auto将在编译时自动推导其类型，简化代码
//     {
                            
//         istringstream is(*it);  //从string对象str中读取字符。                  
//         //用每一行的数据初始化一个字符串输入流；
//         string s;
//         int pam = 0;
                            
//         while (is >> s)     //以空格为界，把istringstream中数据取出放入到依次s中
//         {
//             if (pam == 0)   //获取第1列的数据
                    
//             {
//                 int r = atof(s.c_str()); //做数据类型转换，将string类型转换成int
//                                     // radius.push_back(r);
//                 if(count == ps[]*8)
//                 {
//                     int count_1 = 0;
                    // cout << setw(12) << data; 
                    // while (is >> s)
                    // {
                    //     count_1++;
                    //     cout << setw(12) << s;
                    //     if(count%8==0) cout << "\n"; //如果输出8个了，就换行
                    // }
                                        
//                 }
            
//             }
//             pam++;
                // count++;
            
//         }
//     }
//     OpenFile.close();
// int i = 0;
// While(OpenFile >> str)
// {
//     if(count == ps[]*8)
//     {
        
//         stringstream stream;
//         //定义一个新数组id[]，传出一个
//         stream << str;
//         stream >> id[i];
//         i++;
//     }
// }
// return id;