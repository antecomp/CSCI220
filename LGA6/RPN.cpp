#include <iostream>
#include <stack>
using namespace std;

int RPN(int input[], char operands[]) {

	stack<char> operandsStack;
	for(unsigned int i = 0; i < sizeof(operands); i++) {
		operandsStack.push(operands[i]);
	}

	// bro how do you do this :::((((((

}