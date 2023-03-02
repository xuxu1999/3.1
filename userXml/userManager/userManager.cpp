#include "userManager.h"
#include <vector>
using namespace std;

void userManger::add()
{
	vector<Person> v;
	
	//图形界面获取用户输入参数信息（改）
	Person* p1 = new Student(1, "徐徐1", 23, "男");

	Person* p2 = new Student(2, "徐徐2", 23, "男");

	Person* p3 = new Student(3, "徐徐3", 23, "男");
	v.push_back(*p1);
	v.push_back(*p2);
	v.push_back(*p3);
	this->s = v;
	//保存进文件
}

void userManger::show()
{
	//vector<Person> s;
	for (vector<Person>::iterator it = this->s.begin(); this->s.begin() != this->s.end(); it++) {
		it->showInfo();
	}
}
