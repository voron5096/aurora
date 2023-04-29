#ifndef MyClass__H
#define MyClass__H
#include "MyClass2.h"

class MyClass3: private MyClass2 {
	public:
		MyClass3(string prefix, int data): MyClass2(prefix, data), prefix(prefix+"_3"), data(data * data * data) {
			
		};
		void show() {
			cout << this -> prefix << ' ' << this -> data;
		};
	private:
		int data;
		string prefix;
};

#endif