#include <iostream>
#include <string>
using namespace std;
int main() {
	string name;
	int cookies;
	cout << "please enter your name" << endl;
	cin >> name;
	cout << "Hello, " << name << " how many cookies do you want?" << endl;
	cin >> cookies;
	if (cookies <= 5)
		cout << "you sure?" << endl;
	else if (cookies >=6 && cookies <= 10)
		cout << "dispensing cookies. have and nice day" << endl;
	else if (cookies >= 10)
		cout << "too much cookies!" << endl;
}