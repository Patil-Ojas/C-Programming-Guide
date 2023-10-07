
#include <stdio.h>

int main()
{
    // char ptr[] = "nope";
    char *ptr = "yes";

    ptr = "sike"; //gives error when used with ptr[]
    printf("%s", ptr);
    return 0;
}