#pragma once
#include"Person.h"
class Teacher :public Person {

public:
	Teacher(int no, std::string name, int age, std::string sex);
	~Teacher();

	virtual void showInfo();


};