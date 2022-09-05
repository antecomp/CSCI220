#include <iostream>
#include "implm.h"
using namespace std;
using namespace implementation;


int main() {
	holds5 example("apple", "pear", "orange", "lychee", "pickle");
	example.print_five("test");
	example.print_five(5);
	example.print_five('c');
	cout << example.getItem(3) << std::endl;
	cout << example.getItem(0);
    return 0;
}