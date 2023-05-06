#ifndef __MC_1__H
#define __MC_1__H

class MyClass1 {
	public:
		MyClass1(string _id): id(_id+"_1") {
			
		};
		void show() {
			cout << id;
		};
	private:
		string id;
};

#endif