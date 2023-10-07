
#include <stdio.h>

int main()
{
    int var = 2;
    printf("%d\n", &var); //u?
    printf("%d", *(&var));

    return 0;
}