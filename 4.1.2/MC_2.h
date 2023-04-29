#ifndef MC_2_H
#define MC_2_H
#include "MC_1.h"

class MC_2: private MC_1 {
	public:
		MC_2(string name, int data): MC_1(name, data), name(name+"_2"), data(data * data) {
			
		};
		void show() {
			cout << this -> name << ' ' << this -> data;
		};
	private:
		int data;
		string name;
};

#endif