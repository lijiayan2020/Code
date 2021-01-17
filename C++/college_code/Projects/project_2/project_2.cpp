//大二上 实验2 模拟猜物品价格游戏
//目的要求：用C/C++语言设计并实现猜物品价格游戏，加强对C/C++语言的认识与理解。
// 实验内容：
// 程序开始运行，首先要求用户输入不同指令，
// 选择功能。输入1时不限制猜的次数（直到用户输入字符q时退出）；
// 输入2时限制猜10次。
// 选择功能后，用户通过键盘输入数字猜价格，
// 如输入的数字大于随机生成的三位整数价格，则提示输入过大，反之则提示用户输入的数字过小。
// 如用户输入的数字等于程序随机生成的价格，则输出恭喜猜对，并输出用户猜的次数。
#include<iostream>
#include<string>
// #include<sstream>//强制数字转字符串
#include<cstdlib>//包括函数rand用于返回随机整数
#include<ctime>
#define random(a,b) (rand()%(b-a+1)+a)//宏定义取得[a,b]的随机整数
using namespace std;

//猜测
void Guess(int i, int target)
{
    
    int guess; //用户猜的价格
    int count = 0; //计算猜的次数
    string q;

    while(true)//将其写成函数，由上面两种选择传入参数，一个是10，一个是true.int型和字符串型
    //问题是如何让这两个都能传入
    //采用的方法就是确定i的数据类型（错误）
    {
        cout << "---Please enter the price you guessed :"; cin >> guess;
        if(guess<100||guess>999)
        {
            cout << "!The price is between 100 and 999 !(Does not count as guesses)" <<endl;
            continue;
        }
        count+=1;
        if(guess>target) //大
        {
            cout << "---Guess too much !---" << endl; 
        }
        else if(guess<target) //小
        {
            cout << "---Guess less !---" << endl;
        }
        else //对了
        {
            cout << "---Got it right !---" << endl;
            break;
        }
        if(i==2&&count==10)
        {
            cout << "The times is 10! OFF" << endl;
            cout << "The number is " << target << endl;
            break;
        }
        if(i==1)//如果限制次数为10就无需输入q退出
        {
            cout << "-------------------" << endl;
            cout << "Enter 'q' to quit .\nEnter other key to continue" << endl; 
            cout << "-------------------" << endl;
            cin >> q;
        }
        if(i==1 && q=="q")
        {
            cout << "---Exit success !---" << endl;
            cout << "The number is " << target << endl;
            break;
        }
        else 
        {
            continue;
        }
        
    }
    if(i==1||(i==2&&count<10))//如果是无限次才输出猜的次数
    {
        cout << "---The number of guesses is:" << count << endl;
    }
}
int main()
{
    int target; //价格
    int func; //功能
    // target = random(100,999);//产生随机整数，为什么每次运行的时候都是141
    
    int j=1; //判断什么时候退出程序
    while(j)
    {
        srand(time(0));
        target = random(100, 999);
        cout << "------------------------------------" << endl;
        cout << "Enter '1' to select unlimited times." << endl;
        cout << "Enter '2' to select 10 times." << endl;
        cout << "------------------------------------" << endl;
        cout << "Please enter your wanted function:"; cin >> func;
        if(func!=1&&func!=2)
        {
            cout << "Error!" << endl;
            continue;
        }
        Guess(func, target);
        cout << "Exit project?(yes/0,no/1)"; cin >> j;
    }
    return 0;
}