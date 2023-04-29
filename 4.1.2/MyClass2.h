#ifndef MyClass2_H
#define MyClass2_H
#include "MyClass1.h"

class MyClass2: private MyClass1 {
	public:
		MyClass2(string name, int data): MyClass1(name, data), name(name+"_2"), data(data * data) {
			
		};
		void show() {
			cout << this -> name << ' ' << this -> data;
		};
	private:
		int data;
		string name;
};

#endif