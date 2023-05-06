#ifndef _MyClass3_
#define _MyClass3_
#include "MyClass1.h"

class MyClass3: public MyClass1 {
	public:
		MyClass3(string x): name(x + "_3"), MyClass1(x + "_3") {
			
		};
		void show() {
			cout << name;
		};
	private:
		string name;
};

#endif