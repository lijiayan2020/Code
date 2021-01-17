//carrots.cpp -- food processing program
//uses and displays avariable
#include <iostream>

int main()
{
	using namespace std;
	
	int carrots;        //declare an integer variable
	
	carrots = 25;       //assign avalue to the vatiable
	cout << "I have ";
	cout << carrots;	//display the value of the vatiable
	cout << " carrots.";
	cout << endl;
	carrots = carrots-1; //modify the vatiable
	cout << "Crunch,cruch.Now I have " << carrots << " carrots." << endl;
	return 0;
}
