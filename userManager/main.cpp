#include<iostream>
#include"userManager.h"

int main() {

	Person* user = NULL;
	int status = 1;
	if (status == 1)
	{
		user = new Teacher(1, "ÐìÐì", 23, "ÄÐ");
	}
	user->showInfo();
	return 0;
}