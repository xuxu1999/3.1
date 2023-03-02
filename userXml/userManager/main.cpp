#include<iostream>
#include"userManager.h"

int main() {

	userManger uM;
	/*Person* user = NULL;
	int status = 1;
	if (status == 1)
	{
		user = new Teacher(1, "ÐìÐì", 23, "ÄÐ");
	}
	user->showInfo();*/
	uM.add();
	uM.show();

	return 0;
}