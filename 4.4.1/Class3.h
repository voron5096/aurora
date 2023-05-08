#ifndef CLASS3_H
#define CLASS3_H
#include "Class2.h"

class Class3: public Class2 {
	public:
		void print() {
			cout << "Array dimension: " << value << endl;
			cout << "The original array:";
			for (int i = 0; i < value; i++) {
				cout << setw(5) << array[i];
				//if (i != value-1) cout << " ";
			}
			cout << endl;
			cout << "Min: " << min << endl;
			cout << "Sum: " << sum;
			};
};

#endif