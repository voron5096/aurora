#ifndef __MC_8__H
#define __MC_8__H
#include "MyClass6.h"
#include "MyClass7.h"

class MyClass8: public MyClass6, public MyClass7 {
	public:
		MyClass8(string _id): id(_id+"_8"), MyClass6(_id+"_8"), MyClass7(_id+"_8") {
			
		};
		void show() {
			cout << id;
		};
	private:
		string id;
};

#endif