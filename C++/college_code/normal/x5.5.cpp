#include <iostream>
using namespace std;
class Shape											//声明抽象基类Shape
{public:
	virtual float area() const {return 0.0;}				//虚函数
	virtual float volume() const {return 0.0;}			//虚函数
	virtual void shapeName() const = 0;				//纯虚函数
};

class Point: public Shape								//Point是Shape的公用派生类
{public:
	Point (float = 0, float = 0);						//声明构造函数
	void setpoint (float, float);
	float getX() const {return x;}						//设置点的x坐标
	float getY() const {return y;}						//设置点的y坐标
	virtual void shapeName() const {cout<<"Point:";}	//对虚函数进行再定义
	friend ostream & operator << (ostream &, const Point &);	//运算符重载
protected:
	float x, y;
};

//定义Point类成员函数
Point::Point (float a, float b)							//定义构造函数
	{x = a; y = b;}
void Point::setpoint (float a, float b)
	{x = a; y = b;}
ostream & operator << (ostream & output, const Point &p)
	{output<<"["<<p.x<<"."<<p.y<<"]";
	return output;}

class Circle: public Point								//声明Circle类
{public:
	Circle (float x = 0, float y = 0, float r = 0);			//声明构造函数
	void setRadius(float);								//设定半径
	float getRadius() const;							//取半径的值
	virtual float area() const;							//对虚函数进行再定义
	virtual void shapeName () const {cout<<"Circle:";}	//对虚函数进行再定义
	friend ostream & operator<< (ostream &, const Circle &);	//运算符重载
protected:
	float radius;
};

Circle::Circle(float a, float b, float r):Point(a,b), radius(r) {}		//定义构造函数
void Circle::setRadius(float r){radius=r;}
float Circle:: getRadius () const {return radius;}
float Circle:: area() const {return 3.14159*radius*radius;}
ostream & operator<<(ostream &output, const Circle &c)
{	output<<"["<<c.x<<","<<c.y<<"],r="<<c.radius;
	return output;}

class Cylinder: public Circle							//声明Cylinder类
{public:
	Cylinder (float x = 0, float y = 0, float r = 0, float h = 0);		//声明构造函数
	void setHeight(float);								//设定圆柱高
	virtual float area() const;							//重载虚函数
	virtual float volume() const;						//重载虚函数
	virtual void shapeName() const {cout<<"Cylinder:";}		//重载虚函数
	friend ostream & operator<<(ostream&, const Cylinder&);	//运算符重载
protected:
	float height;
};
//定义Cylinder类成员函数
Cylinder::Cylinder (float a, float b, float r, float h): Circle(a, b, r), height(h) {}						//定义构造函数
	void Cylinder::setHeight(float h) {height = h;}			//设定圆柱高
	float Cylinder::area() const							//计算圆柱表面积
	{	return 2*Circle:: area() + 2*3.14159*radius*height;}
	float Cylinder::volume() const							//计算圆柱体积
	{	return Circle::area()*height;}
ostream & operator<<(ostream & output, const Cylinder& cy)
	{	output<<"["<<cy.x<<","<<cy.y<<"],r="<<cy.radius<<",h="<<cy.height;
	return output;}

int main()											//main函数
{	Point point(3.2,4.5);								//建立Point类对象point
	Circle circle(2.4, 1.2, 5.6);						//建立Circle类对象circle
	Cylinder cylinder (3.5, 6.4, 5.2, 10.5);				//建立Cylinder类对象cylinder
	point.shapeName();								//用对象名建立静态关联
	cout<<point<<endl;								//输出点的数据
	circle.shapeName();								//静态关联
	cout<<circle<<endl;								//输出圆的数据
	cylinder.shapeName();							//静态关联
	cout<<cylinder<<endl<<endl;						//输出圆柱的数据
	Shape *pt;										//定义基类指针
	pt = &point;										//使指针指向Point类对象
	pt->shapeName();								//用指针建立动态关联
	cout<<"x="<<point.getX()<<",y="\
	<<point.getY()<<"\narea="<<pt->area()\
	<<"\nvolume="<<pt->volume()<<"\n\n";		//输出点的数据
	pt =& circle;										//指针指向Circle类对象
	pt->shapeName();								//动态关联
	cout<<"x="<<circle.getX()<<",y="\
	<<circle.getY()<<"\narea="<<pt->area()\
	<<"\nvolume="<<pt->volume()<<"\n\n";		//输出圆的数据
	pt =& cylinder;									//指针指向Cylinder类对象
	pt->shapeName();								//动态关联
	cout<<"x="<<cylinder.getX()<<",y="\
	<<cylinder.getY()<<"\narea="<<pt->area()\
	<<"\nvolume="<<pt->volume()<<"\n\n";		//输出圆柱的数据
	return 0;
}

