#include <cstdio>
#include <iostream>
#include <string>
#include <memory>
#include "Hello.h"

using namespace std;

int main()
{
	cout << "hello world" << endl;

	cout << "hello world again" << endl;

	string str = "hello world";

	int i = 10;

	cout << str << endl;

	shared_ptr<int> intRef = make_shared<int>(100);

	cout << "intRef: " << *intRef << endl;

	printf("hello from InCentOS!\n");

	Hello();

	system("pause");
    return 0;
}