#include<iostream>
#include <vector>
using namespace std;

void print(vector<int>& v) {
	for (vector<int>::iterator i = v.begin(); i < v.end(); i++)
	{
		cout << *i << "  ";
	}
	cout << endl;
}

//构造
void test01() {//构造函数

	vector<int>	v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	print(v);
	cout << "----"<<endl;


	vector<int> v1(v.begin(), v.end());
	print(v1);
	cout << "----" << endl;

	vector<int> v2(4, 3);
	print(v2);
	cout << "-----" << endl;

	//拷贝构造函数
	vector<int> v3(v1);
	print(v3);

}
//赋值
void test02() {
	//赋值操作
	vector<int> v(4, 3);
	print(v);
	cout << "-----" << endl;

	vector<int> v1 = v;
	print(v1);
	cout << "----" << endl;

	vector<int> v2;
	v2.assign(2, 6);
	print(v2);

}
//增删
void test03() {
	//增删
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	print(v);
	cout << "--------" << endl;
	v.pop_back();//删除最后一个
	print(v);
	cout << "------" << endl;
	//插入
	v.insert(v.begin(), 100);
	print(v);
	cout << "-------" << endl;

	v.insert(v.end(), 2, 100);
	print(v);
	cout << "-------" << endl;

	//删除迭代器指向的元素
	v.erase(v.begin());
	print(v);

	cout << "-----" << endl;
	//v.erase(v.begin(), v.end()); //erase:删除抹去
	//print(v);

	v.clear();//删除所有
	print(v);


}
//数据存 取
void test04() {
	//数据存取
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	print(v);
	cout << "--------" << endl;
	cout << "at(1):" << v.at(1) << endl;//指定索引的数据,下标0开始
	cout << "----" << endl;
	cout << "v[2]:" << v[2] << endl;

	//返回第一个数据
	cout << "v.front():" << v.front() << endl;
	//最后一个数据
	cout << "v.back():" << v.back() << endl;
}
//容器互换 swap
void test05() {
	//容器互换
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 5; i++) {
		v1.push_back(i);
	}

	for (int i = 0; i < 10; i++) {
		v2.push_back(i);
	}

	print(v1);
	print(v2);
	cout << "--------" << endl;
	v1.swap(v2);//交换两个容器的元素
	print(v1);
	print(v2);
}
//预留空间
void test06() {
	//预留空间，减少动态扩展的次数
	vector<int> v;
	v.reserve(10000);//预留的位置不能初始化，也不能访问
	int num = 0;
	int* p = NULL;
	for (int i = 0; i < 1000; i++) {
		v.push_back(i);
		if (p != &v[0]) {
			p = &v[0];
			num++;
		}
	}
	cout << "num=" << num << endl;
}
//vector容量和大小
void test07() {
	//vector容量和大小
	vector<int> v; 
	cout << "v.empty():" << v.empty() << endl;//1返回真，是空的
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	cout << "v.empty():" << v.empty() << endl;
	v.reserve(100);
	//cout << v[90] << endl;//不可访问，引发异常
	cout << "容量：v.capacity():" << v.capacity() << endl;
	cout << "v.size()" << v.size() << endl;
	//指定长度
	v.resize(15,2);
	print(v);
}
int main() {
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	test07();
	/*
	vector<int> v;
	增：v.push_back();
	删：v.po
	
	*/
	return 0;
}