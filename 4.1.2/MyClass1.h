#ifndef MyClass1_H
#define MyClass1_H


class MC_1 {
	public:
		MC_1(string name, int data): name(name+"_1"), data(data) {
			
		};
		void show() {
			cout << this -> name << ' ' << this -> data;
		};
	private:
		int data;
		string name;
};

#endif