#ifndef __MC_7__H
#define __MC_7__H
#include "MyClass4.h"
#include "MyClass5.h"

class MyClass7: public MyClass4, public MyClass5 {
	public:
		MyClass7(string x): id(x + "_7"), MyClass4(x + "_7"), MyClass5(x + "_7") {
			
		};
		void show() {
			cout << id;
		};
	private:
		string id;
};

#endif