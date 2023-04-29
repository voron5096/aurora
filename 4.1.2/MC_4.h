#ifndef MC_4__H
#define MC_4__H
#include "MC_3.h"

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