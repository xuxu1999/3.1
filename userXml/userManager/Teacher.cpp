#include "Teacher.h"
#include<iostream>
Teacher::Teacher(int no, std::string name, int age, std::string sex)
{
	this->no = no;
	this->name = name;
	this->age = age;
	this->sex = sex;
	this->status = 1;//1代表老师
}

void Teacher::showInfo() {


	std::cout << "教师号：" << this->no << " "
		      << "教师姓名：" << this->name << " "
			  << "年龄：" << this->age << " "
		      << "性别：" << this->sex << std::endl;
}