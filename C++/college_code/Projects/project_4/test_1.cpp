//string 转 int
#include<iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    stringstream stream;     //声明一个stringstream变量
	int n;
	string str = "1234";
    stream << str;
    stream >> n;
    cout << n <<endl;
    return 0;
}