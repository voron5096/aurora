#ifndef MyClass3_H
#define MyClass3_H
#include "MyClass2.h"

class MyClass3: private MyClass2 {
	public:
		MyClass3(string name, int data): MyClass2(name, data), name(name+"_3"), data(data * data * data) {
			
		};
		void show() {
			cout << this -> name << ' ' << this -> data;
		};
	private:
		int data;
		string name;
};

#endif