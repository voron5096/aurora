#ifndef __MC_7__H
#define __MC_7__H
#include "MyClass4.h"
#include "MyClass5.h"

class MyClass7: public MyClass4, public MyClass5 {
	public:
		MyClass7(string _id): id(_id+"_7"), MyClass4(_id+"_7"), MyClass5(_id+"_7") {
			
		};
		void show() {
			cout << id;
		};
	private:
		string id;
};

#endif