#ifndef MyClass__H
#define MyClass__H
#include "MyClass1.h"

class MyClass2: private MyClass1 {
	public:
		MyClass2(string prefix, int data): MyClass1(prefix, data), prefix(prefix+"_2"), data(data * data) {
			
		};
		void show() {
			cout << this -> prefix << ' ' << this -> data;
		};
	private:
		int data;
		string prefix;
};

#endif