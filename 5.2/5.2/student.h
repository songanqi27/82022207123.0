#pragma once
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	void set_value(int _num, std::string _name, char _sex)
	{
		num = _num;
		name = _name;
		sex = _sex;
	}
private:
	int num;
	std::string name;
	char sex;
};
