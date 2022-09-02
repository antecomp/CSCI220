#include <iostream>

using namespace std;

class Fraction {
public:
 // constructor
    Fraction(int n, int d = 1) {
      num = n;
      den = d;
    }
 // operator overloads
    Fraction operator+(const Fraction rhs){

    }
    friend Fraction operator*(const Fraction lhs, const Fraction rhs){

    }
    friend ostream& operator<<(ostream& out, const Fraction a){
      
    }

private:
    int num, den; // member variables

 };

int main() {
    Fraction a(5, 8);
    Fraction b(4, 9);
    cout << (a * b) << endl; // prints 20/72
    cout << (a + b) << endl; // prints 77/72
}
