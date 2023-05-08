#ifndef af
#define af
#include "RevereArr.h"
class ArrayFull : protected RevereArr
{
public:
void main_func() {
	using namespace std;
	int n = 0;
	cin >> n;
	cout << "Array dimension: " << n << "\n";
	enter_size(n);
	enter_array();
	cout << "The original array:";
	print();
	cout << "\n";
	RevereArr::reverse();
	cout << "An ordered array:";
	RevereArr::print();
};
};
#endif