#include <iostream>             //将类声明头文件包含进来
#include "student.h"
using namespace std;
int main()
{
	Student stud;                //定义对象
	//Student stud1(007, "tcg", 'm');
	stud.set_value(007, "tcg", 'm');
	stud.display();              //执行stud对象的display函数
	system("pause");
	return 0;
}