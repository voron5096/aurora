#ifndef MyClass_H
#define MyClass_H

class MyClass1 {
	public:
		MyClass1(string name, int data): name(name+"_1"), data(data) {
			
		};
		void show() {
			cout << this -> name << ' ' << this -> data;
		};
	private:
		int data;
		string name;
};

#endif