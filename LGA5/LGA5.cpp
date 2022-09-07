#include <iostream>
#include "implm.h"
using namespace std;
using namespace implementation;


int main() {
	holds5 <string, string> example("apple", "pear", "orange", "lychee", "pickle");
	example.print_five("test");
	cout << example.getItem(3) << std::endl;
	cout << example.getItem(0);

	cout << endl;

	holds5 <int, int> ex2(1, 2, 3, 4, 5);
	cout << ex2.getItem(2);

    return 0;
}