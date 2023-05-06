#ifndef _MyClass1_
#define _MyClass1_

class MyClass1 {
	public:
		MyClass1(string x): name(x + "_1") {
			
		};
		void show() {
			cout << name;
		};
	private:
		string name;
};

#endif