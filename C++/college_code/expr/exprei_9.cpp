//�š���ģ��ʵ�飨2ѧʱ��

//1. ����3.14��дΪ����ģ���ⶨ�����Ա������
#include <iostream>
using namespace std;
template <class numtype >
class Compare
{
public:
	Compare(numtype a,numtype b)
{
	x = a; y = b;
}
	numtype max();

	numtype min();


private:
	numtype x, y;

};
template <class numtype >
numtype Compare<numtype>::max()
{	return (x > y) ? x : y;
}
template <class numtype >
numtype Compare <numtype>:: min()
{
	return (x < y) ? x : y;
}

int main()
{
	Compare<int>cmp1(3,7);  //�������cmp1,�������������Ƚ�
	cout << cmp1.max() << " is the Maximum of two integer numbers." << endl;
	cout << cmp1.min() << " is the Minimum of two integer numbers." << endl << endl;

	Compare<float>cmp2(45.78, 93.6); //
	cout << cmp2.max() << " is the Maximum of two float numbers." << endl;
	cout << cmp2.min() << " is the Minimum of two float numbers." << endl << endl;

	Compare<char>cmp3('a', 'A'); //�ַ��Ƚ�
	cout << cmp3.max() << " is the Maximum of two characters." << endl;
	cout << cmp3.min() << " is the Minimum of two characters." << endl << endl;
	
	return 0;
}

