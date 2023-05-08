#ifndef __MC_5__H
#define __MC_5__H
#include "MyClass1.h"

class MyClass5: public virtual MyClass1 {
	public:
		MyClass5(string x): id(x + "_5"), MyClass1(x + "_5") {
			
		};
		void show() {
			cout << id;
		};
	private:
		string id;
};

#endif