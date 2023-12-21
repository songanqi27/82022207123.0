#pragma once
class Rectangle
{
public:
	Rectangle()
	{
		length = 1;
		width = 1;
		heigh = 1;
	}
	Rectangle(double newLength, double newWidth, double newHeigh)
	{
		length = newLength;
		width = newWidth;
		heigh = newHeigh;
	}
	double length;
	double width;
	double heigh;
	double getVolume()
	{
		return length * width * heigh;
	}
};