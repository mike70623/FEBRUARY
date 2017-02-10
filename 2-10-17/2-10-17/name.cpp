
#include <stdio.h>
int main() {
	char name[10];
	printf("name?\n");
	fgets (name, 10, stdin);
	printf("hello, %s", name);

}