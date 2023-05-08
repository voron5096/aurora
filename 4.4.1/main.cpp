#include <iostream>
#include <iomanip>
using namespace std;
#include "Class2.h"
#include "Class3.h"

int main() {
	Class3 *ptr = new Class3();
	if(!ptr->input()) return 0;
	ptr->arr_sum();
	ptr->arr_min();
	ptr->in_out();
	return 0;
}