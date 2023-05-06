#ifndef _MyClass2_
#define _MyClass2_
#include "MyClass1.h"

class MyClass2: public MyClass1 {
	public:
		MyClass2(string x): name(x + "_2"), MyClass1(x + "_2") {
			
		};
		void show() {
			cout << name;
		};
	private:
		string name;
};

#endif