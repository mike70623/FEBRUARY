#include <iostream>
#include <string>
using namespace std;
int main() {
	string name;
	int hight;
	int width;
	int volume;
	cout << "name?" << endl;
	cin >> name;
	cout << "Hello, " << name << ". what is the hight of your cone?" << endl;
	cin >> hight;
	cout << "what is the base of your cone?" << endl;
	cin >> width;
	volume = width*hight / 3;
	cout << "the volume of your cone is " << volume << endl;
}