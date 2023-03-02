#include<iostream>

#include"tinyxml2.h"
using namespace tinyxml2;
using namespace std;


int main() {

	XMLDocument doc;
	XMLDeclaration* declaration = doc.NewDeclaration();

	doc.InsertFirstChild(declaration);

	doc.SaveFile("./test.xml");


	return 0;
}