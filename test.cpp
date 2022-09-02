#include <iostream>
using namespace std;

int main() {
//    string uinput;
//    cin >> uinput;
//    cout << "You Said: " << uinput;
	string x;
	cin >> x;  
	string y = (x == "hi") ? "hi :)" : "you didnt say hi :(";
	cout << y << endl;
    return 0;
}