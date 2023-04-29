#include <iostream>
#include <string>
using namespace std;
#include "MC_4.h"

int main() {
	string name;
	int data;
	cin >> name >> data;
	
	MC_1* mc;
	mc = (MC_1*) new MC_4(name, data);
	//MC_1* mc = (MC_1*)new MC_4(name, _data);
	mc -> show();
	cout << endl;
	((MC_2*)mc) -> show();
	cout << endl;
	((MC_3*)mc) -> show();
	cout << endl;
	((MC_4*)mc) -> show();
}