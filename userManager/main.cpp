#include<iostream>
#include"userManager.h"

int main() {

	Person* user = NULL;
	int status = 1;
	if (status == 1)
	{
		user = new Teacher(1, "����", 23, "��");
	}
	user->showInfo();
	return 0;
}