#include <iostream>
using namespace std;
class Shape											//�����������Shape
{public:
	virtual float area() const {return 0.0;}				//�麯��
	virtual float volume() const {return 0.0;}			//�麯��
	virtual void shapeName() const = 0;				//���麯��
};

class Point: public Shape								//Point��Shape�Ĺ���������
{public:
	Point (float = 0, float = 0);						//�������캯��
	void setpoint (float, float);
	float getX() const {return x;}						//���õ��x����
	float getY() const {return y;}						//���õ��y����
	virtual void shapeName() const {cout<<"Point:";}	//���麯�������ٶ���
	friend ostream & operator << (ostream &, const Point &);	//���������
protected:
	float x, y;
};

//����Point���Ա����
Point::Point (float a, float b)							//���幹�캯��
	{x = a; y = b;}
void Point::setpoint (float a, float b)
	{x = a; y = b;}
ostream & operator << (ostream & output, const Point &p)
	{output<<"["<<p.x<<"."<<p.y<<"]";
	return output;}

class Circle: public Point								//����Circle��
{public:
	Circle (float x = 0, float y = 0, float r = 0);			//�������캯��
	void setRadius(float);								//�趨�뾶
	float getRadius() const;							//ȡ�뾶��ֵ
	virtual float area() const;							//���麯�������ٶ���
	virtual void shapeName () const {cout<<"Circle:";}	//���麯�������ٶ���
	friend ostream & operator<< (ostream &, const Circle &);	//���������
protected:
	float radius;
};

Circle::Circle(float a, float b, float r):Point(a,b), radius(r) {}		//���幹�캯��
void Circle::setRadius(float r){radius=r;}
float Circle:: getRadius () const {return radius;}
float Circle:: area() const {return 3.14159*radius*radius;}
ostream & operator<<(ostream &output, const Circle &c)
{	output<<"["<<c.x<<","<<c.y<<"],r="<<c.radius;
	return output;}

class Cylinder: public Circle							//����Cylinder��
{public:
	Cylinder (float x = 0, float y = 0, float r = 0, float h = 0);		//�������캯��
	void setHeight(float);								//�趨Բ����
	virtual float area() const;							//�����麯��
	virtual float volume() const;						//�����麯��
	virtual void shapeName() const {cout<<"Cylinder:";}		//�����麯��
	friend ostream & operator<<(ostream&, const Cylinder&);	//���������
protected:
	float height;
};
//����Cylinder���Ա����
Cylinder::Cylinder (float a, float b, float r, float h): Circle(a, b, r), height(h) {}						//���幹�캯��
	void Cylinder::setHeight(float h) {height = h;}			//�趨Բ����
	float Cylinder::area() const							//����Բ�������
	{	return 2*Circle:: area() + 2*3.14159*radius*height;}
	float Cylinder::volume() const							//����Բ�����
	{	return Circle::area()*height;}
ostream & operator<<(ostream & output, const Cylinder& cy)
	{	output<<"["<<cy.x<<","<<cy.y<<"],r="<<cy.radius<<",h="<<cy.height;
	return output;}

int main()											//main����
{	Point point(3.2,4.5);								//����Point�����point
	Circle circle(2.4, 1.2, 5.6);						//����Circle�����circle
	Cylinder cylinder (3.5, 6.4, 5.2, 10.5);				//����Cylinder�����cylinder
	point.shapeName();								//�ö�����������̬����
	cout<<point<<endl;								//����������
	circle.shapeName();								//��̬����
	cout<<circle<<endl;								//���Բ������
	cylinder.shapeName();							//��̬����
	cout<<cylinder<<endl<<endl;						//���Բ��������
	Shape *pt;										//�������ָ��
	pt = &point;										//ʹָ��ָ��Point�����
	pt->shapeName();								//��ָ�뽨����̬����
	cout<<"x="<<point.getX()<<",y="\
	<<point.getY()<<"\narea="<<pt->area()\
	<<"\nvolume="<<pt->volume()<<"\n\n";		//����������
	pt =& circle;										//ָ��ָ��Circle�����
	pt->shapeName();								//��̬����
	cout<<"x="<<circle.getX()<<",y="\
	<<circle.getY()<<"\narea="<<pt->area()\
	<<"\nvolume="<<pt->volume()<<"\n\n";		//���Բ������
	pt =& cylinder;									//ָ��ָ��Cylinder�����
	pt->shapeName();								//��̬����
	cout<<"x="<<cylinder.getX()<<",y="\
	<<cylinder.getY()<<"\narea="<<pt->area()\
	<<"\nvolume="<<pt->volume()<<"\n\n";		//���Բ��������
	return 0;
}

