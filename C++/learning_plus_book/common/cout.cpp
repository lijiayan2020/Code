//定义三个函数，其中两个为纯输出文字
#include<iostream>
using namespace std;
void T_b_m(void); //Three blind mice
void S_h_t_r(void);//See how they run
int main()
{
	T_b_m();
	T_b_m();
	S_h_t_r();
	S_h_t_r();
	return 0;
} 
void T_b_m(void)
{
	cout << "Three blind mice" << endl;
}
void S_h_t_r(void)
{
	cout << "See how they run" << endl;
}
