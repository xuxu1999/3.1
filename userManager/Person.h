#pragma once
#include<string>
class Person {

public:
	//Person();
	//~Person();
	
	virtual void showInfo() = 0;//显示信息

protected:
	int no;//编号
	std::string name;
	int age;
	std::string sex;
	int status;//身份 1为老师 ，2学生
};