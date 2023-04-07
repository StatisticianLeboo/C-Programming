#include <stdio.h>

/**
 * Program to return larger of two numbers
 * @ num1 - the first parameter
 * @ num2 - the second parameter
 * @ return_num - the larger of the 2 numbers
 */

int large_num (int num1, int num2)
{
	int return_num;

	if (num1>num2) {
		return_num = num1;
		printf("num1 is larger \n");
	}
	else {
        return_num = num2;
		printf("num2 is larger");
	}
	return return_num;
}

/* function returning the max between two numbers */
int large_num(int num1, int num2) {

   /* local variable declaration */
   int return_num;

    printf("Input value of a: \n");
    scanf("%d", &num1);
	printf("Input value of b: \n");
	scanf("%d", &num2);

   if (num1 > num2)
      result = num1;
   else
      result = num2;

   return result;
}


