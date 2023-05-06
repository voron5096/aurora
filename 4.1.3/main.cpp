#include <iostream>
#include <string>
using namespace std;
#include "MyClass8.h"

int main() {
	MyClass8 *mc; // Объявить один указатель на объект класса x
	string _id;
	cin >> _id;
	mc = new MyClass8(_id);
	((MyClass1*)((MyClass2*)((MyClass6*)(mc)))) -> show(); //8_6_2_1
	cout << endl;
	//MC_8_6_3_1
	((MyClass1*)((MyClass3*)((MyClass6*)(mc))))->show(); //MC_8_6_3_1
	cout << endl;
	//MC_8_7_4_1
	((MyClass1*)((MyClass4*)((MyClass7*)(mc))))->show();
	cout << endl;
	//MC_8_7_5_1
	((MyClass1*)((MyClass5*)((MyClass7*)(mc))))->show();
	cout << endl;
	//===MC_8_6_2
	((MyClass2*)((MyClass6*)(mc)))->show();
	cout << endl;
	//===MC_8_6_3
	((MyClass3*)((MyClass6*)(mc)))->show();
	cout << endl;
	//===MC_8_7_4
	((MyClass4*)((MyClass7*)(mc)))->show();
	cout << endl;
	//===MC_8_7_5
	((MyClass5*)((MyClass7*)(mc)))->show();
	cout << endl;
	//===MC_8_6
	((MyClass6*)(mc))->show();
	cout << endl;
	//===MC_8_7
	((MyClass7*)(mc))->show();
	cout << endl;
	//===MC_8
	mc->show();
}