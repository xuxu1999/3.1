#include<iostream>
#include"userManager.h"

int main() {

	userManger uM;
	/*Person* user = NULL;
	int status = 1;
	if (status == 1)
	{
		user = new Teacher(1, "����", 23, "��");
	}
	user->showInfo();*/
	uM.add();
	uM.show();

	return 0;
}