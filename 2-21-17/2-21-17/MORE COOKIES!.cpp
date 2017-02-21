#include <iostream>
using namespace std;
int main() {
	char input;
	cout << "what kind of cookie floats your boat (c = chocolate, s = surgar, p = penutbutter)" << endl;
	cin >> input;
	switch(input) {

	case 'c':
			cout << "you got chocolate!" << endl;
			break;
	case 's':
		cout << "you got some surgar!" << endl;
		break;
	case 'p':
		cout << "you got penutbutter!" << endl;
			break;
	default:
		cout << "MY DRINK. MY DIET DR. KELP!" << endl;
		break;
	}
}