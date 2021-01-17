//lotto.cpp -- probabilty of winning
#include <iostream>
//Note:some implementactions require double instead of longdouble
long double probability (unsigned numbers,unsigned picks);
int main()
{
	using namespace std;
	double total,choices;
	cout << "Enter the total number of choices on the game card and\n"
		    "thw number of picks allowed:\n";
	while ((cin >> total >> choices) && choices <=total)
	{
		cout << "You have one chances in";
		cout << probability(total,choices);  //compute the odds
		cout << " of winning \n";
		cout << "Next two numbers(q to quit)\n";
		
	
	}
	cout << "bye\n";
	return 0;
 } 
 //the following function calculates the probability of picking picks
 //number correctly from numbers choices
 long double probability(unsigned numbers,unsigned picks)
 {
 	long double result = 1.0; //here come some local variables
 	long double n;
 	unsigned p;
 	
 	for (n = numbers,p = picks; p>0;n--,p--)
 		result = result*n/p;
 	return result;
 }
