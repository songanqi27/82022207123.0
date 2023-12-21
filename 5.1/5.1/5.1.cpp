#include <iostream>
using namespace std;
#include<iostream>
using namespace std;
class Time // 定义 Time 类
{
private:
	int hour;
	int minute;
	int sec;
public:
	int time()
	{
		hour = 0;
		minute = 0;
		sec = 0;
	}
	int time(int newHour, int newMinute, int newSec)
	{

		hour = newHour;
		minute = newMinute;
		sec = newSec;
	}
	void setHour()
	{
		cout << "请输入小时: " ;
		int newHour;
		cin >> newHour;
		hour = newHour;
	}
	void setMinute()
	{
		cout << "请输入分钟: " ;
		int newMinute;
		cin >> newMinute;
		minute = newMinute;
	}
	void setSec()
	{
		cout << "请输入秒: " ;
		int newSec;
		cin >> newSec;
		sec = newSec;
	}
	void getHour()
	{
		cout << hour <<"时" << endl;
	}
	void getMinute()
	{
		cout << minute <<"分" << endl;
	}
	void getSec()
	{
		cout << sec <<"秒" << endl;
	}
};
int main()
{
	Time t1; //定义 t1 为 Time 类对象
	t1.setHour(); //输入设定的时间
	t1.setMinute();
	t1.setSec();
	t1.getHour();
	t1.getMinute();
	t1.getSec();
	system("pause");
	return 0;
}