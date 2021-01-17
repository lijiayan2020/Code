//七、指针与引用实验（2学时）


//1. 定义一个一维数组，数组的长度及元素由用户输入，通过函数实现数组元素的排序，函数参数分别用指针和引用的传址方式。

//#include<iostream>
//using namespace std;
//
//void swap1(int *p1,int *p2)//通过指针 
//{
//	int temp;
//	temp=*p1;
//	*p1=*p2;
//	*p2=temp;
//
//}
//void swap2(int &a,int &b) //通过引用 
//{
//	double temp;
//	temp=a;
//	a=b;
//	b=temp;
//}
//
//int main()
//{
//	int n,i,j;
//	cout << "Please enter array's length: ";//定义长度 
//	cin >> n;
//
//	int a[n];
//	int b[n];
//
//	
//	for(i=0;i<n;i++)//输入 
//	{
//		cout << "Please enter the element in the arrry.\n";
//		cout << "第"<< i+1 <<"个元素" << " : "; cin >> a[i];
//	}
//	for(int i=0;i<n;i++)//复制数组 
//		b[i]=a[i];
//	//第一种方式 
//	cout << "Using pointer：\n";
//    for (i = 0; i < n - 1; i++)//冒泡排序 
//    {        
//		for (j = 0; j < n - 1 - i; j++)
//        {
//			if (a[j] > a[j + 1])
//				swap1(&a[j],&a[j+1]);
//        }               
//	}
//	for(i=0;i<n;i++)//输出 
//		cout << a[i] << endl;
//		
//	//第二种方式	
//	cout << "Using quote: \n";//引用 
//	for (i = 0; i < n- 1; i++)
//    {        
//		for (j = 0; j < n- 1 - i; j++)
//        {
//			if (b[j] > b[j + 1])
//				swap2(b[j],b[j+1]);
//        }               
//	}
//	for(i=0;i<n;i++)
//		cout << b[i] << endl;
//	
//	return 0;
//				 
//                       
//}
//2. 通过传递函数来计算两个正整数的最大公约数和最小公倍数。


#include<iostream>
using namespace std;

int  div(int a, int b)//greatest common divisor(最大公约数)
{
	
	while(a%b!=0)
	{
		int m,s=a%b;
		m=max(b,s);
		a=m;
		b=b+s-m;
		
	}
	return b;
}
int mul(int a,int b,int c)//lease common multiple（最小公倍数） 
{
	return b*c/a;
}
void swap(int *p1,int *p2)//交换值 
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;

}
int max(int a,int b)//求最大 
{
	if(a<b) a=b;
	return a;
}
int main()
{
	int a,b;
	int n1,n2;
	cout << "Please enter two integers.\n";//输入 
	cout << "a:"; cin >> a;
	cout << "b:"; cin >> b;
	if(a<b) swap(a,b);
	n1=div(a,b);
	n2=mul(n1,a,b);
	cout << "greatest common divisor: " << n1 << endl;
	cout << "lease common multiple: " << n2 << endl;
	return 0; 
}


