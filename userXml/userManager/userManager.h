#pragma once
#include"Person.h"
#include"Teacher.h"
#include"Student.h"
#include<vector>
class userManger {

public:
	//��ɾ�Ĳ�
	
	void add();

	void show();//��ʾ��Ϣ

	void del();

	void modify();

	void find();

protected:
	vector<Person> s;
};