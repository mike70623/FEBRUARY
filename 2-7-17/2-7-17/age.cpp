#include <iostream>
#include <string>
using namespace std;
int main() {
	string name;
	int age;
	cout << "name?" << endl;
	cin >> name;
	cout << "hello, " << name << ". whats your age" << endl;
	cin >> age;
	if (age % 2 == 0)
		cout << "is your name steven?" << endl;
	else
		cout << "your a bit of am oddball are you?" << endl;
}