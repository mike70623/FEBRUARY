#include <iostream>
using namespace std;
int main() {
	char input = 'a';//dummy input
	int input1;
	int input2;
	int room = 1;
	int answer;
	while (input != 'q') {
		switch (room) {
		case 1:
			cout << "What do you want to do. (multiply=m) (add=a) (subtract=s) (divide=d)" << endl;
			cin >> input;
			if (input == 'm')
				room = 2;
			if (input == 'a')
				room = 3;
			if (input == 's')
				room = 4;
			if (input == 'd')
				room = 5;
			break;
		case 2:
			cout << "What is the first number you want to multiply?" << endl;
			cin >> input1;
			cout << "The second?" << endl;
			cin >> input2;
			answer = (input1*input2);
			cout << answer << endl;
			input = 'q';
			break;
		case 3:
			cout << "What is the first number you want to add?" << endl;
			cin >> input1;
			cout << "The second?" << endl;
			cin >> input2;
			answer = (input1 + input2);
			cout << answer << endl;
			input = 'q';
			break;
		case 4:
			cout << "What is the first number you want to subtract?" << endl;
			cin >> input1;
			cout << "The second?" << endl;
			cin >> input2;
			answer = (input1 - input2);
			cout << answer << endl;
			input = 'q';
			break;
		case 5:
			cout << "What is the first number you want to divide?" << endl;
			cin >> input1;
			cout << "The second?" << endl;
			cin >> input2;
			answer = (input1 / input2);
			cout << answer << endl;
			input = 'q';
			break;
		}
	}
}