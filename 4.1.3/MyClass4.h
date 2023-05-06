#ifndef __MC_4__H
#define __MC_4__H
#include "MyClass1.h"

class MyClass4: public MyClass1 {
	public:
		MyClass4(string _id): id(_id+"_4"), MyClass1(_id+"_4") {
			
		};
		void show() {
			cout << id;
		};
	private:
		string id;
};

#endif