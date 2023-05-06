#include <iostream>
#include <string>
using namespace std;
#include "MyClass8.h"

int main() {
	MyClass8 *obj; // Объявить один указатель на объект класса x
	string x; // Объявить переменную строкового типа
	cin >> x; // Ввести значение строковой переменной. Вводимое значение является идентификатором
	obj = new MyClass8(x); // Создать объект класса 8 посредством параметризированного конструктора, передав в качестве аргумента строковую переменную
	((MyClass1*)((MyClass2*)((MyClass6*)(obj)))) -> show(); //8_6_2_1
	cout << endl;
	((MyClass1*)((MyClass3*)((MyClass6*)(obj)))) -> show(); //8_6_3_1
	cout << endl;
	//MC_8_7_4_1
	((MyClass1*)((MyClass4*)((MyClass7*)(obj)))) -> show();
	cout << endl;
	//MC_8_7_5_1
	((MyClass1*)((MyClass5*)((MyClass7*)(obj)))) -> show();
	cout << endl;
	//===MC_8_6_2
	((MyClass2*)((MyClass6*)(obj))) -> show();
	cout << endl;
	//===MC_8_6_3
	((MyClass3*)((MyClass6*)(obj))) -> show();
	cout << endl;
	//===MC_8_7_4
	((MyClass4*)((MyClass7*)(obj))) -> show();
	cout << endl;
	//===MC_8_7_5
	((MyClass5*)((MyClass7*)(obj))) -> show();
	cout << endl;
	//===MC_8_6
	((MyClass6*)(obj)) -> show();
	cout << endl;
	//===MC_8_7
	((MyClass7*)(obj)) -> show();
	cout << endl;
	//===MC_8
	obj -> show();
}