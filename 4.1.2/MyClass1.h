#ifndef MyClass__H
#define MyClass__H


class MyClass1 {
	public:
		MyClass1(string prefix, int data): prefix(prefix+"_1"), data(data) {
			
		};
		void show() {
			cout << this -> prefix << ' ' << this -> data;
		};
	private:
		int data;
		string prefix;
};

#endif