
#include <stdio.h>
#include <string.h>

int main()
{
    char *str = "rip";
    int a;
    a = strlen(str); //this function excludes the null character
    printf("%d", a);
}