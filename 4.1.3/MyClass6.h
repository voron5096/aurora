#ifndef __MC_6__H
#define __MC_6__H
#include "MyClass2.h"
#include "MyClass3.h"

class MyClass6: public MyClass2, public MyClass3 {
	public:
		MyClass6(string _id): id(_id+"_6"), MyClass2(_id+"_6"), MyClass3(_id+"_6") {
			
		};
		void show() {
			cout << id;
		};
	private:
		string id;
};

#endif