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

//����
void test01() {//���캯��

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

	//�������캯��
	vector<int> v3(v1);
	print(v3);

}
//��ֵ
void test02() {
	//��ֵ����
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
//��ɾ
void test03() {
	//��ɾ
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	print(v);
	cout << "--------" << endl;
	v.pop_back();//ɾ�����һ��
	print(v);
	cout << "------" << endl;
	//����
	v.insert(v.begin(), 100);
	print(v);
	cout << "-------" << endl;

	v.insert(v.end(), 2, 100);
	print(v);
	cout << "-------" << endl;

	//ɾ��������ָ���Ԫ��
	v.erase(v.begin());
	print(v);

	cout << "-----" << endl;
	//v.erase(v.begin(), v.end()); //erase:ɾ��Ĩȥ
	//print(v);

	v.clear();//ɾ������
	print(v);


}
//���ݴ� ȡ
void test04() {
	//���ݴ�ȡ
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	print(v);
	cout << "--------" << endl;
	cout << "at(1):" << v.at(1) << endl;//ָ������������,�±�0��ʼ
	cout << "----" << endl;
	cout << "v[2]:" << v[2] << endl;

	//���ص�һ������
	cout << "v.front():" << v.front() << endl;
	//���һ������
	cout << "v.back():" << v.back() << endl;
}
//�������� swap
void test05() {
	//��������
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
	v1.swap(v2);//��������������Ԫ��
	print(v1);
	print(v2);
}
//Ԥ���ռ�
void test06() {
	//Ԥ���ռ䣬���ٶ�̬��չ�Ĵ���
	vector<int> v;
	v.reserve(10000);//Ԥ����λ�ò��ܳ�ʼ����Ҳ���ܷ���
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
//vector�����ʹ�С
void test07() {
	//vector�����ʹ�С
	vector<int> v; 
	cout << "v.empty():" << v.empty() << endl;//1�����棬�ǿյ�
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	cout << "v.empty():" << v.empty() << endl;
	v.reserve(100);
	//cout << v[90] << endl;//���ɷ��ʣ������쳣
	cout << "������v.capacity():" << v.capacity() << endl;
	cout << "v.size()" << v.size() << endl;
	//ָ������
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
	����v.push_back();
	ɾ��v.po
	
	*/
	return 0;
}