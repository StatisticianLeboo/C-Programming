#include <stdio.h>
/* Program to check if integer is positive negative or a zero
 * @num is the integer
 * user will key in an integer
 * this program uses if command
 */
int main(void)
{
	int num;
	printf("please enter the value of num: \n");
	scanf("%d", &num);
	if (num == 0){
		printf("integer is a zero");
	}
	if (num > 0){
		printf("integer is positive");
	}
	if (num < 0){
		printf("integer is negative");
	}
	return 0;
}