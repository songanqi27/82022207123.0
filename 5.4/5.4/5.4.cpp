#include<iostream>
#include<math.h>
#define PI 3.14
using namespace std ;
class Shape
{

public:
	double x;
	double y;
	virtual void getArea()
	{
		cout << x * y << endl;
	}
};
class Circle : public Shape{
public:
	double radius;
	Circle(double newradius)
	{
		radius = newradius;
	}
	virtual void getArea()
	{
		cout << "The area of Circle is " << radius * radius * PI << endl;
	}
};
class Rectangle : public Shape{
public:
	double length;
	double width;
	Rectangle(double newlength, double newwidth)
	{
		length = newlength;
		width = newwidth;
	}
	virtual void getArea()
	{
		cout << "The area of Rectangle is" << length * width << endl;
	}
};
class Square : public Shape{
public:
	double breadth;
	Square(double newbreadth)
	{
		breadth = newbreadth;
	}
	virtual void getArea()
	{
		cout << "The area of Square is " << breadth * breadth << endl;
	}
};
class Trapezoid : public Shape{
public:
	double up;
	double down;
	double h;
	Trapezoid(double newup, double newdown, double newh)
	{
		up = newup;
		down = newdown;
		h = newh;
	}
	virtual void getArea()
	{
		cout << "The area of Trapezoid is" << (up + down) * h / 2 << endl;
	}
};
class Triangle : public Shape{
public:
	double a;
	double b;
	double c;
	Triangle(double newa, double newb, double newc)
	{
		a = newa;
		b = newb;
		c = newc;
	}
	virtual void getArea()
	{
		cout << "The area of Triangle is" << (sqrt((a + b + c) * (a + b - c) * (a + c - b) * (b + c - a))) / 4 <<
			endl;
	}
};
int main()
{

	Circle circle(12);
	Square square(4);
	Rectangle rectangle(1, 4);
	Trapezoid trapezoid(2.0, 4.5, 3);
	Triangle triangle(3, 5, 6);
	circle.getArea();
	square.getArea();
	rectangle.getArea();
	trapezoid.getArea();
	triangle.getArea();
	system("pause");
	return 0;
}