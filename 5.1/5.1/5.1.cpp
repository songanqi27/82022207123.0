#include <iostream>
using namespace std;
#include<iostream>
using namespace std;
class Time // ���� Time ��
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
		cout << "������Сʱ: " ;
		int newHour;
		cin >> newHour;
		hour = newHour;
	}
	void setMinute()
	{
		cout << "���������: " ;
		int newMinute;
		cin >> newMinute;
		minute = newMinute;
	}
	void setSec()
	{
		cout << "��������: " ;
		int newSec;
		cin >> newSec;
		sec = newSec;
	}
	void getHour()
	{
		cout << hour <<"ʱ" << endl;
	}
	void getMinute()
	{
		cout << minute <<"��" << endl;
	}
	void getSec()
	{
		cout << sec <<"��" << endl;
	}
};
int main()
{
	Time t1; //���� t1 Ϊ Time �����
	t1.setHour(); //�����趨��ʱ��
	t1.setMinute();
	t1.setSec();
	t1.getHour();
	t1.getMinute();
	t1.getSec();
	system("pause");
	return 0;
}