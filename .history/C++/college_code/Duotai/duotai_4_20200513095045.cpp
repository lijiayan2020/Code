//多态案例 制作饮品
// 煮水-冲泡-倒入杯中- 
#include <iostream>
using namespace std;
class AbstractDrinking
{
public:
	//煮水 
	virtual void Boil()=0;
	
	//冲泡
	virtual void Brew()=0;
	
	//倒入杯中
	virtual void PourInCup()=0; 
	
	//加入辅料
	virtual void PutSomething()=0; 
	 
	//制作饮品
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	 } 
 };
 
 //制作咖啡
 class Coffee:public AbstractDrinking 
 {
 public:
	//煮水 
	virtual void Boil()
	{
		cout << "煮清水" << endl; 
	}
	//冲泡
	virtual void Brew()
	{
		cout << "冲泡咖啡 " << endl; 
	}
	
	//倒入杯中
	virtual void PourInCup()
	{
		cout << " 倒入咖啡杯" << endl; 
	}
	
	//加入辅料
	virtual void PutSomething()
	{
		cout << "加入糖和牛奶"  << endl; 
	}
	 	
 };
 class Tea :public AbstractDrinking
 {
 public:
	//煮水 
	virtual void Boil()
	{
		cout << "煮清水" << endl; 
	}
	//冲泡
	virtual void Brew()
	{
		cout << "冲泡茶叶 " << endl; 
	}
	
	//倒入杯中
	virtual void PourInCup()
	{
		cout << " 倒入茶杯" << endl; 
	} 
	
	//加入辅料
	virtual void PutSomething()
	{
		cout << "不需要加入辅料"  << endl; 
	}
	 	
 };
 
 //制作函数
 void  doWork(AbstractDrinking *abs)
 {
 	abs->makeDrink();
 	delete abs;
  } 
 void test01()
 {
 	//制作咖啡
	 doWork(new Coffee) ;
	 cout << "--------" << endl;
	 //制作茶叶
	 doWork(new Tea) ;
  } 
int main()
{
	test01();
	return 0;
 } 
