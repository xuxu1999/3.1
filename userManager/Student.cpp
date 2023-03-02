#include "Student.h"

#include<iostream>
Student::Student(int no, std::string name, int age, std::string sex)
{
	this->no = no;
	this->name = name;
	this->age = age;
	this->sex = sex;
	this->status = 2; //status;//2代表学生
}

Student::~Student()
{
}

void Student::showInfo()
{
	std::cout <<"学号："<<this->no<<" "
			  << "学生姓名：" << this->name << " "
			  << "年龄：" << this->age << " "
			  << "性别：" << this->sex <<std::endl;
}
