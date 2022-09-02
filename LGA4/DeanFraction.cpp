#include <iostream>
using namespace std;

class Fraction {
    private:   
        int num, den;
    public:
        //Constructor
        Fraction(int n, int d = 1) 
            :num(n), den(d) {}; // shorthand initialization list

        // operator overloads
        Fraction operator+(const Fraction rhs) {
            
        };
};

