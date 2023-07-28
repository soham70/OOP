#include<iostream>
using namespace std;

class Shape{
	public:
			virtual float calculate () {};
//		virtual float calculate()=0;
};

class Square:public Shape{
	float a;
	public:
		Square (float l)
		{
			a=l;
		}
		float calculate()
		{
			return a*a;
		}
};

class Circle:public Shape{
	float r;
	public:
		Circle(float l)
		{
			r=l;
		}
		float calculate()
		{
			return 3.14*r*r;
		}
};

int main()
{
	Shape *shape;
	Square s(5.2);
	Circle c(10.5);
	shape=&s;
	int a1=shape->calculate();
	shape=&c;
	int a2=shape->calculate();
	cout<<"\nArea of Square= "<<a1;
	cout<<"\nArea of Circle= "<<a2;
	

return 0;
}

