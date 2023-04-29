#ifndef MyClass4_H
#define MyClass4_H
#include "MyClass3.h"

class MC_4: private MC_3 {
	public:
		MC_4(string name, int data): MC_3(name, data), name(name+"_4"), data( data * data * data * data) {
			
		};
		void show() {
			cout << this -> name << ' ' << this -> data;
		};
	private:
		int data;
		string name;
};

#endif