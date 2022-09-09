#include <iostream>
#include <queue>
using namespace std;


// ask - when we use int* as a parameter, is it copying the inputted array to the free store??
queue<int> createQueue(int* arr, int length) {
	queue<int> rtnqueue;
	for(int i = 0; i < length; i++) {
		rtnqueue.push(arr[i]);
	}
	return rtnqueue;
}


int main() {
	int inputArr[5] = {5, 6, 7, 4, 4};
	queue<int> testqueue = createQueue(inputArr, 4);
	cout << testqueue.front();
	cout << testqueue.back();
	return 0;
}