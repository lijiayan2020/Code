//大二实验1，实现通讯录
//setw() #include<iomanip>

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class TongXunLu
{
public:
	string name; //名字
	double tel; //电话
	string mail; //E-mail
	double qq; //QQ
	
	void show_data() //显示
	{
		cout << setw(10) << name << " | " << setw(10) << tel << " | " << setw(10) << qq << " | " << setw(10) << mail << endl;
	}
};
//全局变量
int judge; //输入的数字,选择功能,害怕被改变，实际上无需设在主函数外面


//外函数
void choose_func()//选择功能
{
	cout<<"Enter '1' to log data"<<endl; //录入
	cout<<"Enter '2' to show data"<<endl; //显示
	cout<<"Enter '3' to seek data"<<endl; //查找
	cout<<"Enter '4' to change information"<<endl; //修改
	cout<<"Enter  function number:"<<endl;
	
	cin>>judge;
}


int main()
{
	int num = 126; //录入的最大人数
	cout << left; //规定左对齐
	cout << "How many people you want to log :";
	cin >> num;
	int i=1; //决定什么时候退出while
	TongXunLu t[num];
	while (i)
	{
		choose_func();
		if(judge!=1 && judge!=2 && judge!=3 && judge!=4) //输入不规范
		{
			cout << "Error !\nPlease enter '1/2/3/4' to choose function " << endl;
			i = 0; //重新输入
		}
		if (judge==1) //录入 通过上面的人数来确定什么时候退出录入，能够一直输入
		{
			for(int j_1_1=0;j_1_1<num;j_1_1++)
			{
				cout<<"name:";cin>>t[j_1_1].name;
				cout<<"telphone number:";cin>>t[j_1_1].tel;
				cout<<"E-mail:";cin>>t[j_1_1].mail;
				cout<<"QQ:";cin>>t[j_1_1].qq;
				cout << "------------------------------------------------" << endl;
				cout << setw(10) << "name" << " | " << setw(10) << "telephone" << " | " << setw(10) << "QQ" << " | " << setw(10) << "E-mail" << endl; 
				t[j_1_1].show_data(); //查看新录入的信息
				cout << "------------------------------------------------" << endl;
			}
			cout << "------------------------------------------------" << endl;
			cout << "log success !" <<endl;
		}
		if (judge==2) //遍历
		{
			cout << "------------------------------------------------" << endl;
			cout << setw(10) << "name" << " | " << setw(10) << "telephone" << " | " << setw(10) << "QQ" << " | " << setw(10) << "E-mail" << endl; 
			for (int s=0;s<num;s++)
			{
				t[s].show_data();
			}
			cout << "------------------------------------------------" << endl;
			cout << "FINISH !" << endl;
		}
		if(judge==3) //查找
		{
			int j_3=1; //用于决定什么时候退出查找信息
			string str; //查找的人名
			while (j_3)
			{
				cout << "Print name :"; cin >> str;
				int j_3_0 = 0;
				for(int j_3_1=0;j_3_1<num;j_3_1++)
				{
					if(str==t[j_3_1].name) //可以实现查同名字的人
					{
						cout << "------------------------------------------------" << endl;
						cout << setw(10) << "name" << " | " << setw(10) << "telephone" << " | " << setw(10) << "QQ" << " | " << setw(10) << "E-mail" << endl; 
						t[j_3_1].show_data();
						cout << "------------------------------------------------" << endl;
						j_3_0 = 1;
					} //如果找到名字，就调用展示函数
				}
				if(j_3_0==0){cout << "No such person"<< endl;} //如果没找到此人，输出提示
				cout << "Exit search?(yes/0;no/1)"; cin >> j_3; //是否退出查找
			}
			
		}
		if(judge==4)//无法实现重名的修改！，暂时的想法是遍历看有几个，然后输出，问用户修改哪一个
		{
			TongXunLu new_t[num];//用于存储重名的人
			string change_name;
			double new_qq;
			double new_tel;
			double new_mail;
			int j_4_2=0;
			cout << "change name :"; cin >> change_name;
			for(int j_4_1=0;j_4_1<num;j_4_1++)
			{
				
				if(change_name==t[j_4_1].name)
				{
					cout << "------------------------------------------------" << endl;
					cout << setw(10) << "name" << " | " << setw(10) << "telephone" << " | " << setw(10) << "QQ" << " | " << setw(10) << "E-mail" << endl; 
					t[j_4_1].show_data();
					cout << "------------------------------------------------" << endl;
					new_t[j_4_2]=t[j_4_1];
					j_4_2+=1;
				}
			}
			if(j_4_2==1)//如果没有相同名字的人
			{
				cout << "New QQ : "; cin >> new_t[j_4_2-1].tel;
				cout << "New telephone : "; cin >> new_t[j_4_2-1].tel;
				cout << "New E-mail : "; cin >> new_t[j_4_2-1].mail;
				cout << "------------------------------------------------" << endl;
				cout << setw(10) << "name" << " | " << setw(10) << "telephone" << " | " << setw(10) << "QQ" << " | " << setw(10) << "E-mail" << endl; 
				new_t[j_4_2-1].show_data();
				cout << "------------------------------------------------" << endl;
			}
			//下面这是最开始没有定义新数组的错误做法
			// {
			// 	for(int j_4_1=0;j_4_1<num;j_4_1++)//此处过于累赘，又需要遍历一遍，但是认为记录颇为麻烦，放弃了！
			// 	{
			// 		if(change_name==t[j_4_1].name)
			// 		{
			// 			cout << "New QQ : "; cin >> t[j_4_1].qq;
			// 			cout << "New telephone : "; cin >> t[j_4_1].tel;
			// 			cout << "New E-mail : "; cin >> t[j_4_1].mail;
			// 			cout << "------------------------------------------------" << endl;
			// 			cout << setw(10) << "name" << " | " << setw(10) << "telephone" << " | " << setw(10) << "QQ" << " | " << setw(10) << "E-mail" << endl; 
			// 			t[j_4_1].show_data();
			// 			cout << "------------------------------------------------" << endl;
			// 		}
			// 	}
			// }
			int j_4_3 = 0;//记住输出哪一个
			if(j_4_2>1)//这时候遇见麻烦了，我没办法找到修改的那个，就要将重名的放在一个新的对象数组里，从而解决问题
			{
				cout << "Which one you want to change ?"; cin >> j_4_3;
				cout << "New QQ : "; cin >> new_t[j_4_3-1].qq;
				cout << "New telephone : "; cin >> new_t[j_4_3-1].tel;
				cout << "New E-mail : "; cin >> new_t[j_4_3-1].mail;
				cout << "------------------------------------------------" << endl;
				cout << setw(10) << "name" << " | " << setw(10) << "telephone" << " | " << setw(10) << "QQ" << " | " << setw(10) << "E-mail" << endl; 
				new_t[j_4_3-1].show_data();
				cout << "------------------------------------------------" << endl;
			}
			cout << "Change success !" << endl;
		}
	cout << "Exit project?(yes/0;no/1)"; cin >> i; //是否退出程序
	}
	cout << "Exit success !" << endl;
	
	return 0;
}




