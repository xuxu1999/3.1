#pragma once
#include<string>
class Person {

public:
	//Person();
	//~Person();
	
	virtual void showInfo() = 0;//��ʾ��Ϣ

protected:
	int no;//���
	std::string name;
	int age;
	std::string sex;
	int status;//��� 1Ϊ��ʦ ��2ѧ��
};