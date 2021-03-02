#2.5 特殊回文数(难点：如何判断是否为回文数)
'''
问题描述
　　123321是一个非常特殊的数，它从左边读和从右边读是一样的。
　　输入一个正整数n， 编程求所有这样的五位和六位十进制数，满足各位数字之和等于n 。
输入格式
　　输入一行，包含一个正整数n。
输出格式
　　按从小到大的顺序输出满足条件的整数，每个整数占一行。
样例输入
52
样例输出
899998
989989
998899
数据规模和约定
　　1<=n<=54。
'''

#题解
'''C
#include<stdio.h>
int a(int n)//求出5位数和6位数中的回文数函数 
{
	int i,j,sum,temp,len;
	int a,b,c;
	for(i=10000;i<1000000;++i)
	{
		sum=0;
		temp=i;
		len=0;
		while(temp!=0)
		{
			sum=sum*10+temp%10; #得到的sum就是i的倒过来的数 
			temp=temp/10;
			len++;//累计位数以此判断是5位数还是6位数 
		}
		if(sum==i)//先把回文数求出来，下面再来比较各位数字之和是否等于n 
		{
			a=i%10;//个位 
			b=i/10%10;//十位
			c=i/100%10;//百位 
			
			if(5==len)
			{
				if(n==(2*a+2*b+c))
				{
					printf("%d\n",i);
				} 
			}
			if(6==len)
			{
				if(n==(2*a+2*b+2*c))
				{
					printf("%d\n",i); 
				}
			}
		}
	}
}
//主函数 
int main()
{
	int n;
	scanf("%d",&n);
	a(n);
	return 0;
}
''' 

#我做一遍 python
import time
start = time.time()
def huiwen(n):
    for i in range(10000,1000000):
        
        temp = i
        num = 0
        len = 0
        while temp!=0:
            
            num = num*10 + temp%10
            temp = int(temp/10)
            len += 1
        if num==i:
            sum1 = int(num/100)%10 + int(num/10)%10 
            sum2 = num%10
            if len==5:
                if sum1*2+sum2 == n:
                    print(i)
            if len==6:
                if sum1*2+sum2*2 == n:
                    print(i)
n = int(input())
huiwen(n)
end = time.time()
print(end - start)                   
