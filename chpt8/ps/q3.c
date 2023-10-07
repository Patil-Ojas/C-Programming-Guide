
#include <stdio.h>
#include <String.h>

int main()
{
    int a, i=0;
    char arr[10];
    gets(arr);

    while(arr[i]!='\0')
    {
    i++;
    }
    printf("via while loop: %d\n", i);

    //verification
    a = strlen(arr);
    printf("via function: %d", a);

    return 0;
}