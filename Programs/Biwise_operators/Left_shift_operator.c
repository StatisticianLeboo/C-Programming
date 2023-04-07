#include <stdio.h>
int main()
{
    int var, pos, new_var;
    printf("Enter the value you want to left shift: \n");
    scanf("%d", &var);
    printf("Enter the value by which you want to left shift: \n");
    scanf("%d", &pos);

    new_var = (var<<pos);
    printf("The newly left shifted value is: %d", new_var);
    return 0;
}
