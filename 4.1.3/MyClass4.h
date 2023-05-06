#ifndef __MC_4__H
#define __MC_4__H
#include "MyClass1.h"

class MyClass4: public MyClass1 {
	public:
		MyClass4(string x): id(x + "_4"), MyClass1(x + "_4") {
			
		};
		void show() {
			cout << id;
		};
	private:
		string id;
};

#endif