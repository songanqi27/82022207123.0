#pragma once
class Student              //������
{
public:                   //���ó�Ա����ԭ������
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
