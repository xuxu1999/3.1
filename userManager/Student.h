#pragma once
#include "Person.h"
class Student :public Person {
public:
	Student(int no,std::string name,int age ,std::string sex);
	~Student();

	virtual void showInfo();

};

