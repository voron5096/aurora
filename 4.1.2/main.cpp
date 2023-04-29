#include <iostream>
#include <string>
using namespace std;
#include "MyClass4.h"

int main() {
	string name;
	int data;
	cin >> name >> data;
	
	MyClass1* mc;
	mc = (MyClass1*) new MyClass4(name, data);
	mc -> show();
	cout << endl;
	((MyClass2*)mc) -> show();
	cout << endl;
	((MyClass3*)mc) -> show();
	cout << endl;
	((MyClass4*)mc) -> show();
}