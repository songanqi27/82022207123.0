#include <iostream>
#include "Rectangle.h"
using namespace std;
int main()
{

	double length, width, heigh;
	for (int i = 0; i < 3; i++)
	{
		cout << "The length is: " ;
		cin >> length;
		cout << "The width is: " ;
		cin >> width;
		cout << "The heigh is: " ;
		cin >> heigh;
		Rectangle rectangle1(length, width, heigh);
		cout << "The volume of length " << rectangle1.length << " width " << rectangle1.width << " heigh " << rectangle1.heigh << " is " << rectangle1.getVolume() << endl;
	}
	system("pause");
	return 0;
}