#include "Teacher.h"
#include<iostream>
Teacher::Teacher(int no, std::string name, int age, std::string sex)
{
	this->no = no;
	this->name = name;
	this->age = age;
	this->sex = sex;
	this->status = 1;//1������ʦ
}

void Teacher::showInfo() {


	std::cout << "��ʦ�ţ�" << this->no << " "
		      << "��ʦ������" << this->name << " "
			  << "���䣺" << this->age << " "
		      << "�Ա�" << this->sex << std::endl;
}