#include <iostream>
#include <string>
using namespace std;
int main() {
	string name;
	int input;
	cout << "please enter your name" << endl;
	cin >> name;
	cout << "hello, " << name << " please choose from one of the three song option by selecting 1,2 or 3." << endl;
	cin >> input;
	if (input == 1)
		cout << "when the light is gone, and the land is dark. and the moon is the only light we'll see." << endl;
	else if (input == 2)
		cout << "now shes back in the atmosphere, with drops of jupiter in hair." << endl;
	else if (input == 3)
		cout << "common and SLAM and welcom to the JAM, common and SLAM if you wanna JAM." << endl;
}                                   