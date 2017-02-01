#include <iostream>
using namespace std;
int main() {
	char choice;
	cout << "do you like the Broncos? y/n" << endl;
	cin >> choice;
	if (choice == 'y')
		cout << "nice" << endl;
	if (choice == 'n')
		cout << "you deserve the dine in the sewers" << endl;
}