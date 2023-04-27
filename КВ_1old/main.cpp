#include <iostream>
#include "cl_base.h"
#include "cl_application.h"
#include "cl_1.h"
int main() {
	cl_application MAIN (nullptr);
	MAIN.build_tree_objects();
	return MAIN.exec_app();
}
