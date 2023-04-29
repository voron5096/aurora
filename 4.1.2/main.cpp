#include <iostream>
#include <string>
using namespace std;
#include "MyClass4.h"

int main() {
	string prefix;
	int data;
	cin >> prefix >> data;
	
	MyClass1* obj; // Описать четыре класса которые последовательно наследуют друг друга, последовательными номерами классов 1,2,3,4.
	obj = (MyClass1*) new MyClass4(prefix, data); // Реализовать программу, в которой использовать единственный указатель на объект базового класса (номер класса 1).
	obj -> show();
	cout << endl;
	((MyClass2*)obj) -> show(); // Наследственность реализовать так, что можно было вызвать методы, принадлежащие объекту конкретного класса, только через объект данного класса.
	cout << endl;
	((MyClass3*)obj) -> show();
	cout << endl;
	((MyClass4*)obj) -> show();
}