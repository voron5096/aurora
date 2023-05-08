#ifndef ra
#define ra
#include <iomanip>
#include "RevereArr.h"
#include "BaseClass.h"

class RevereArr: protected BaseClass {
public:
	static int compare(const void* a, const void* b) {
		const int* x = (int*) a;
		const int* y = (int*) b;
		if (*x > *y)
		return 1;
		if (*x < *y)
		return -1;
		return 0;
	}

	void enter_size(int n) {
		els = n;
		nums = new int[n];
	};
	void enter_array() {
		for(int i = 0; i < els; i++) {
			std::cin >> nums[i];
		}
	};
	void reverse() {
		qsort(BaseClass::nums, BaseClass::els, sizeof(int), compare);
	};
	void print() {
		for(int i = 0; i < els; i++) {
			std::cout << std::setw(5) << nums[i];
		}
	};
};

#endif