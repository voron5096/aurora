#ifndef ra
#define ra
#include "BaseClass.h"

class RevereArr: protected BaseClass {
	public:
		static int compare(const void *a, const void *b) {
			const int* x = (int*) a;
			const int* y = (int*) b;
			if (*x > *y)
				return 1;
			if (*x < *y)
				return -1;
			return 0;
		}
	
		void inputSize(int sizeArr) {
			tempMaxArr = sizeArr;
			nums = new int[sizeArr];
		};

		void inputArr() {
			for(int i = 0; i < tempMaxArr; i++) {
				cin >> nums[i];
			}
		};

		void reverse() {
			qsort(BaseClass::nums, BaseClass::tempMaxArr, sizeof(int), compare);
			
		};

		void print() {
			for(int i = 0; i < tempMaxArr; i++) {
				cout << " " << nums[i];
			}
		};
};

#endif