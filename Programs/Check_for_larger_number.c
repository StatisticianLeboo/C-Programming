#include <stdio.h>

int main ()
{
	int a,b;
	printf("Input value of a: \n");
	scanf("%d", &a);
	printf("Input value of b: \n");
	scanf("%d", &b);
	if (a>b) {
		printf("a is larger");
	}
	else {
		printf("b is larger");
	}
	return 0;
}
		