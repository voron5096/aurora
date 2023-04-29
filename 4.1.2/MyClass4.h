#ifndef MyClass4_H
#define MyClass4_H
#include "MyClass3.h"

class MyClass4: private MyClass3 {
	public:
		MyClass4(string name, int data): MyClass3(name, data), name(name+"_4"), data( data * data * data * data) {
			
		};
		void show() {
			cout << this -> name << ' ' << this -> data;
		};
	private:
		int data;
		string name;
};

#endif