#ifndef __MC_3__H
#define __MC_3__H
#include "MyClass1.h"

class MyClass3: public MyClass1 {
	public:
		MyClass3(string _id): id(_id+"_3"), MyClass1(_id+"_3") {
			
		};
		void show() {
			cout << id;
		};
	private:
		string id;
};

#endif