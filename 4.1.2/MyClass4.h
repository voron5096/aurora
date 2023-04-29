#ifndef MyClass__H
#define MyClass__H
#include "MyClass3.h"

class MyClass4: private MyClass3 {
	public:
		MyClass4(string prefix, int data): MyClass3(prefix, data), prefix(prefix+"_4"), data(data * data * data * data) {
			
		};
		void show() {
			cout << this -> prefix << ' ' << this -> data;
		};
	private:
		int data;
		string prefix;
};

#endif