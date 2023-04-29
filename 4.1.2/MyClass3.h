#ifndef MyClass3_H
#define MyClass3_H
#include "MyClass2.h"

class MC_3: private MC_2 {
	public:
		MC_3(string name, int data): MC_2(name, data), name(name+"_3"), data(data * data * data) {
			
		};
		void show() {
			cout << this -> name << ' ' << this -> data;
		};
	private:
		int data;
		string name;
};

#endif