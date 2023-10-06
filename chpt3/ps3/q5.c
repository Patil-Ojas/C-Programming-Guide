
#include <stdio.h>

int main()
{
    char int_input;
    printf("enter letter: ");
    scanf("%c", &int_input);

    if (int_input>=97 && int_input<=122)
    {
        printf("letter is lowercase");
    }
    else
    {
        printf("letter is uppercase %d", int_input);
    }
    return 0;
}