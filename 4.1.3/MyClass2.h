#ifndef __MC_2__H
#define __MC_2__H
#include "MyClass1.h"

class MyClass2: public MyClass1 {
	public:
		MyClass2(string _id): id(_id+"_2"), MyClass1(_id+"_2") {
			
		};
		void show() {
			cout << id;
		};
	private:
		string id;
};

#endif