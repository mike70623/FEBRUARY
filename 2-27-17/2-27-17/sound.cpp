#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
	for (int i = 0; i < 10; i++) {
		Beep(200, 1000+i);
		Beep(500, 1000+i);
	}
	MessageBox(0, "Happy monday!","happy", MB_OK);
}