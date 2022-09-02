#include <iostream>
using namespace std;

class Fraction {
private:
 int num, den; // member variables
 public:
 // constructor
 Fraction(int n , int d ) {
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
    Fraction a = new Fraction(3,5);
    Fraction b = new Fraction(1,5);
    Fraction add = new Fraction;
    add = a+b;
    Fraction mul= new Fraction;
    int mul = a*b;
    cout << a << b << add << mul << endl;

}