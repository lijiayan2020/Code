//3.7.1 输入身高，const 转化成英尺和英寸
//#include<iostream>
//int main()
//{
//	using namespace std;
//	int	const Change_inch=12;
//	int height;
//	cout << "(inches)Enter your height:___\b\b\b";
//	cin >> height ;
//	cout << height%Change_inch << "(feet)" << endl;
//	cout << height/Change_inch<<"(inch)" << endl;
//	
//	return 0;
// } 




//3.7.2输入体重（磅）和身高（英尺和英寸） ，输出BMI 体重除以身高的平方
//#include<iostream>
//int main()
//{
//	using namespace std;
//	cout.setf(ios_base::fixed,ios_base::floatfield);//fixde-point
//	int const Change_inch=12;
//	double const Change_meter=0.0254;
//	double const Change_kilo=2.2;
//	int Inch,Feet;
//	double Pouds;
//	double height,weight;
//	cout << "Enter your height:"<<endl;
//	cout << "(feet)";
//	cin >> Feet ;
//	cout <<"(inch)";
//	cin >> Inch ;
//	cout << "Enter your weight:";
//	cin >> Pouds;
//	height=(Feet*Change_inch+Inch)*Change_meter;
//	weight=Pouds/Change_kilo;
//	cout << "BMI:";
//	cout << weight/(height*height)<< endl;
//	return 0;
//}




//3.7.3度分秒
//#include<iostream>
//int main()
//{
//	using namespace std;
//	int const Change=60;
//	int deg,min,sec;
//	
//	cout << "Enter a latitude in degrees,minutes,and seconds:\n";
//	cout << "First,enter the degrees:";
//	cin >> deg;
//	cout << "Next,enter the minutes of arc:";
//	cin >> min;
//	cout << "Finally,enter the seconds of arc:";
//	cin >> sec;
//	cout <<deg << " degrees, " << min << " minutes," << sec << "seconds = " << double(deg+(sec/Change+min)/Change) << " degrees\n";
//	return 0;
//}
//




////3.7.4天时分秒
//#include<iostream>
//int main()
//{
//	using namespace std;
//	long sec;
//	int day,hour,min,change_sec;
//	int const C1=60;
//	int const C2=24;
//	cout <<"Enter the number of secons: ";
//	cin >> sec;
//	day=sec/C1/C1/C2;
//	hour=sec%(C1*C1*C2)/C1/C1;
////	min=sec%(C1*C1*C2)/C1%C1%C1;
//	min=sec%(C1*C1)/C1;
//	change_sec=sec%C1;
//	
//	cout << sec << " seconds = " 
//	     << day <<" days, " 
//	     << hour << " hours, " 
//	     << min << " minutes,"
//	     <<change_sec << "-seconds.";
//
//
//
//	return 0;
//	 
//	
// } 
//




////3.7.5人口占比
//#include<iostream>
//int main()
//{
//	using namespace std;
//	long long  earth_popu, US_popu;
//	double rate;
//	cout <<"Enter the world's population: ";
//	cin >> earth_popu;
//	cout <<"Enter the population of the US: ";
//	cin >> US_popu;
//	rate=US_popu/double(earth_popu);
//	cout << "The population of the US is " << rate*100 <<"%of the world population.\n";
//	
//	return 0;
//	
// } 


////3.7.6每100公里的耗油量
//#include<iostream>
//int main()
//{
//	using namespace std;
//	long kilo_meter , liter;
//	double ave;
//	cout << "Enter your mile:";
//	cin >> kilo_meter;
//	cout << "Enter your oil:";
//	cin >> liter;
//	ave=liter/kilo_meter*100;
//	cout << "Fuel consumption per 100 kilometers are" << ave  << endl;
//	
//	return 0;
// } 
//
//




//3.7.7转化单位
#include<iostream>
int main()
{
	using namespace std;
	double ave , galon,mile;
	
	
	cout << "Enter the fuel consumption per 100 kilometers :";
	cin >> ave;
	galon=ave/3.875;
	mile=62.14;
	ave=mile/galon;
	cout << "US:" << ave;
	
	
	
	return 0;
}
	
	




















