#ifndef CLASS2_H
#define CLASS2_H

class Class2 {
	public:
		int value, sum, min;
		int* array;
		bool input() {
			cin >> value;
			if (value >= 1 && value <= 100) {
				array = new int[value];
				for (int i = 0; i < value; i++)
					cin >> array[i];
					return true;
			}
			else
					return false;
		};
		
		void arr_sum() {
			for (int i = 0; i < value; i++)
				sum += array[i];
		};
		
		void arr_min() {
			min = array[0];
			for (int i = 1; i < value; i++)
				min -= array[i];
		};
};

#endif