#ifndef __MC_5__H
#define __MC_5__H
#include "MyClass1.h"

class MyClass5: public MyClass1 {
	public:
		MyClass5(string _id): id(_id+"_5"), MyClass1(_id+"_5") {
			
		};
		void show() {
			cout << id;
		};
	private:
		string id;
};

#endif