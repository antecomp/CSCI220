#include <iostream>
using namespace std;

class Fraction {
private:
 int num, den; // member variables
 public:
 // constructor
 Fraction(int n = 3, int d = 1) {
 num = n;
 den = d;
 }
 // operator overloads
 Fraction operator+(const Fraction rhs);{
    int n = num + rhs.num;
    int d = den + rhs.den;
    return (n, d);
 }

 friend Fraction operator*(const Fraction lhs, const Fraction rhs);{
    int n = lhs.num * rhs.num;
    int d = lhs.num * rhs.num;
    return (n,d);
 }

 friend ostream& operator<<(ostream& out, const Fraction a);{
    out << a.num << " / " << a.den;
    return out;
 }
 }

void main{
    Fraction a = new Fraction(3,5)
    Fraction b = new
}