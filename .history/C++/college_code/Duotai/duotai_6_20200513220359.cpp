
#include<iostream>
//多态案例 电脑组装
//案例描述:
//电脑主要组成部件为CPU（用于计算）显卡（用于显示）内存条（用于存储） 
//将每个零件封装出抽象基类，并且提供下同厂商生产大的不同的零件，例如intel厂商和 Lenovo厂商
//创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口
//测试时组装三台不同的电脑进行工作
 
using namespace std;


//抽象不同的零件的类

//抽象CPU类
class CPU 
{
public:
	//抽象的计算函数
	virtual void calculate() = 0;	
};


//抽象显卡类 
class VideoCard
{
public:
	//抽象显示函数
	virtual void display() = 0; 
};

//抽象内存条类
 class Memory
{
public:
	//抽象的存储函数
	virtual void storage() = 0;	
};
//电脑类
class Computer
{
public:
	Computer(CPU *cpu, VideoCard *vc,Memory *mem) 
	{
		m_cpu=cpu;
		m_vc=vc;
		m_mem=mem;
	}
	//提供工作的函数
	void work()
	{
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	 } 
	 //提供析构函数 释放3个电脑零件
	 ~Computer()
	 {
	 	cout << "正在释放三个零件" <<endl; 
	 	if(m_cpu!=NULL)
		 {
		 	cout << "正在释放CPU"<< endl; 
		 	delete m_cpu;
		 	m_cpu=NULL;
		 }
	 	if(m_vc!=NULL)
		 {
		 	cout << "正在释放显卡" << endl; 
		 	delete m_vc;
		 	m_vc=NULL;
		 }
		 
		 if(m_mem!=NULL)
		 {
		 	cout << "正在释放内存条" << endl; 
		 	delete m_mem;
		 	m_mem=NULL;
		 }
	 
	  } 
private:
	 CPU *m_cpu; //CPU 的零件指针 
	 VideoCard *m_vc; //显卡零件指针
	 Memory * m_mem;// 内存条零件指针 
 }; 
 //具体厂商
 
 
 //Intel厂商
 class IntelCPU:public CPU
 {
public:
	virtual void calculate()
	{
		cout << "Intel的CPU开始计算了！" << endl; 
	}
};
class IntelVideoCard:public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel的显卡开始显示了！" << endl; 
	}
};
 class IntelMemory:public Memory 
 {
public:
	virtual void storage()
	{
		cout << "Intel的内存条开始存储了！" << endl; 
	}
}; 
// lenovo厂商
class LenovoCPU:public CPU
 {
public:
	virtual void calculate()
	{
		cout << "Lenovo的CPU开始计算了！" << endl; 
	}
};
class LenovoVideoCard:public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo的显卡开始显示了！" << endl; 
	}
};
 class LenovoMemory:public Memory 
 {
public:
	virtual void storage()
	{
		cout << "Lenovo的内存条开始存储了！" << endl; 
	}
}; 
void test01()
{
	//第一台电脑零件 
	CPU * intelcpu= new IntelCPU;
	 VideoCard * intelvideo= new IntelVideoCard;
	 Memory *intelmemory = new IntelMemory;
	 
	 //创建第一台电脑
	 Computer *computer1 = new Computer(intelcpu,intelvideo,intelmemory);
	 computer1->work();
	 delete computer1;
	 
	 cout << "--------" << endl;
	 //创建第二台电脑
	 Computer *computer2 = new Computer(new LenovoCPU,new LenovoVideoCard,new LenovoMemory);
	 computer2->work();
	 delete computer2;
	  
	  
	  cout << "------" << endl;
	  Computer *computer3 = new Computer(new IntelCPU,new LenovoVideoCard,new IntelMemory);
	 computer3->work();
	 delete computer3;
}  
  
int main()
{
	test01();
	return 0;
} 
