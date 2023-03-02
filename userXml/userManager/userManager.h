#pragma once
#include"Person.h"
#include"Teacher.h"
#include"Student.h"
#include<vector>
class userManger {

public:
	//增删改查
	
	void add();

	void show();//显示信息

	void del();

	void modify();

	void find();

protected:
	vector<Person> s;
};