#include "Student.h"

#include<iostream>
Student::Student(int no, std::string name, int age, std::string sex)
{
	this->no = no;
	this->name = name;
	this->age = age;
	this->sex = sex;
	this->status = 2; //status;//2����ѧ��
}

Student::~Student()
{
}

void Student::showInfo()
{
	std::cout <<"ѧ�ţ�"<<this->no<<" "
			  << "ѧ��������" << this->name << " "
			  << "���䣺" << this->age << " "
			  << "�Ա�" << this->sex <<std::endl;
}
