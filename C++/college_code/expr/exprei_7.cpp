//�ߡ�ָ��������ʵ�飨2ѧʱ��


//1. ����һ��һά���飬����ĳ��ȼ�Ԫ�����û����룬ͨ������ʵ������Ԫ�ص����򣬺��������ֱ���ָ������õĴ�ַ��ʽ��

//#include<iostream>
//using namespace std;
//
//void swap1(int *p1,int *p2)//ͨ��ָ�� 
//{
//	int temp;
//	temp=*p1;
//	*p1=*p2;
//	*p2=temp;
//
//}
//void swap2(int &a,int &b) //ͨ������ 
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
//	cout << "Please enter array's length: ";//���峤�� 
//	cin >> n;
//
//	int a[n];
//	int b[n];
//
//	
//	for(i=0;i<n;i++)//���� 
//	{
//		cout << "Please enter the element in the arrry.\n";
//		cout << "��"<< i+1 <<"��Ԫ��" << " : "; cin >> a[i];
//	}
//	for(int i=0;i<n;i++)//�������� 
//		b[i]=a[i];
//	//��һ�ַ�ʽ 
//	cout << "Using pointer��\n";
//    for (i = 0; i < n - 1; i++)//ð������ 
//    {        
//		for (j = 0; j < n - 1 - i; j++)
//        {
//			if (a[j] > a[j + 1])
//				swap1(&a[j],&a[j+1]);
//        }               
//	}
//	for(i=0;i<n;i++)//��� 
//		cout << a[i] << endl;
//		
//	//�ڶ��ַ�ʽ	
//	cout << "Using quote: \n";//���� 
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
//2. ͨ�����ݺ������������������������Լ������С��������


#include<iostream>
using namespace std;

int  div(int a, int b)//greatest common divisor(���Լ��)
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
int mul(int a,int b,int c)//lease common multiple����С�������� 
{
	return b*c/a;
}
void swap(int *p1,int *p2)//����ֵ 
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;

}
int max(int a,int b)//����� 
{
	if(a<b) a=b;
	return a;
}
int main()
{
	int a,b;
	int n1,n2;
	cout << "Please enter two integers.\n";//���� 
	cout << "a:"; cin >> a;
	cout << "b:"; cin >> b;
	if(a<b) swap(a,b);
	n1=div(a,b);
	n2=mul(n1,a,b);
	cout << "greatest common divisor: " << n1 << endl;
	cout << "lease common multiple: " << n2 << endl;
	return 0; 
}


