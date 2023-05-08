#ifndef af
#define af
#include "RevereArr.h"

class ArrayFull: protected RevereArr {
	public:
		void main_func() {
			using namespace std;
			int sizeArr;
			cin >> sizeArr;
			cout << "Array dimension: " << sizeArr << endl;
			inputSize(sizeArr);
			inputArr();
			cout << "The original array:";
			print();
			cout << endl;
			RevereArr::reverse();
			cout << "An ordered array:";
			RevereArr::print();
		};
};
#endif