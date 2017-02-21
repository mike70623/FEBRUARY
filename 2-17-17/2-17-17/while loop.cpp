#include <iostream>
using namespace std;
int main() {
	char input = 'y';
	
	while (input != 'n') {
		cout << "Do you want cookie? Type N for no." << endl;
		cin >> input;
		cout << "Here is your cookie" << endl;
	}
}