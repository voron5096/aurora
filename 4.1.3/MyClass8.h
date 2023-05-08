#ifndef __MC_8__H
#define __MC_8__H
#include "MyClass6.h"
#include "MyClass7.h"

class MyClass8: public MyClass6, public MyClass7 {
	public:
		MyClass8(string x): id(x + "_8"), MyClass6(x + "_8"), MyClass7(x + "_8"), MyClass1(x + "_8") {
			
		};
		void show() {
			cout << id;
		};
	private:
		string id;
};

#endif