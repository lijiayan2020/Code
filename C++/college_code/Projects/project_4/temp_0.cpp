
    // int count = 0;
    // ;//找的名字
    // int num[10];
    // int i_0 = 0;

    // string str;
    // ifstream OpenFile("C:\\Users\\lijiayan\\Desktop\\data.txt");//打开
    // while(OpenFile >> str)
    // {
    //     if(str == data)
    //     {
            
    //         num[i_0] = count;
    //         i_0++;
    //     }
    //     count++;
    // }
    // // cout << i_0 << endl;
    // //将num转成是第几行
    // for(int s=0;s<i_0;s++)
    // {
    //     num[s]=(num[s]-ch-1)/8;
    //     cout << num[s] << endl;
    // }
    // OpenFile.clear();
    // OpenFile.seekg(0,ios::beg);
    // vector<string> vec; //定义string型，名字vec
    // string temp;//暂时存放一行的数据

    // //利用getline()读取每一行，并按照行为单位放入到vector
    // while (getline(OpenFile, temp))
    // {
    //     vec.push_back(temp);//尾部插入
    // }

    // // vector <int> radius;
    // cout << "----------------------------------------------"<< endl;
    // cout << setw(12) << "ID" << setw(12) << "name" << setw(12) << "age" \
    //     << setw(12) << "sex" << setw(12) << "birth" \
    //     << setw(12) << "address" << setw(12) << "telephone" << setw(12) << "E-mail" << endl; 
    // int it_2 = 0;
    // int s_2 = 0;
    // for (auto it = vec.begin(); it != vec.end(); it++) //auto将在编译时自动推导其类型，简化代码
    // {
    //     //cout << *it << endl;
    //     istringstream is(*it);  //从string对象str中读取字符。                  
    //     //用每一行的数据初始化一个字符串输入流；
    //     string s;
        
        
        
    //     if(it_2 == num[s_2])
    //     {
    //         while(is >> s) 
    //         {
    //             cout << setw(12) << s;
                
    //         }
    //         cout << "\n";
    //         s_2++;
    //     }
    //     it_2++;
    // }

    // OpenFile.close();