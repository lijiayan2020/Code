#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name,i;
	cout<< "Please enter your name:";
	cin >> name;
	cout << name << " I know today it is special for you ,\n" 
		 << "so please allow me to say something to you.\n";
	cout << "You are full of intelgence in my eyes,\n" 
	     << "maybe I will never tell you it face to face.\n" 
	     << "I am afraid of my future,\n" 
	     << "where I can't see us.\n" 
	     << "My best wish is that we can play code together.\n"  
	     << "It's a beautiful thing,isn't it?\n" 
	     << "But now,\n" 
	     << "\ahappy birthday!\n";
	cout << "Enter 'y' to continue\n";
	cin >> i;
	if(i=="y")
	{
		cout << "Thank you !\n";
		cout << "a hope that you will be happy forever\n ";
	}
	return 0;
	
	      
}
