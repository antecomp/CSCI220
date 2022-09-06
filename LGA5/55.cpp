#include <iostream>
#include "implm.h"
using namespace std;

class point
{
public:
	int x, y;
	point()
	{
		x = 0;
		y = 0;
	}
	point(int d1, int d2)
	{
		x = d1;
		y = d2;
	}
};
point operator+(point t, point u) { return point(t.x + u.x, t.y + u.y); }
ostream &operator<<(ostream &out, point p)
{
	out << "(" << p.x << ", " << p.y << ")";
	return out;
}
template <typename T>
void print_sum(T *arr, unsigned int len)
{
	if (len == 0)
		return;
	T acc = arr[0];
	for (unsigned int i = 1; i < len; i++)
	{
		acc = acc + arr[i];
	}
	cout << acc << endl;
}
int main()
{
	int iarr[4] = {1, 2, 3, 4};
	print_sum(iarr, 4); // Expected: 1 + 2 + 3 + 4   --- Prints 10
	string sarr[3] = {"blue", "red", "yellow"};
	print_sum(sarr, 3); // Expected: Prints blueredyellow
	point parr[2]; // { (_,_) , (_,_) }
	parr[0].x = 10; // { (10,_) , (_,_)  }
	parr[0].y = 20; // { (10,20) , (_,_) }
	parr[1].x = -5; // { (10,20) , (-5,_) }
	parr[1].y = 17; // { (10,20) , (-5,17) }
	print_sum(parr, 2); // (10,20) + (-5,17) -- Expected Output: (5, 37)
	return 0;
}