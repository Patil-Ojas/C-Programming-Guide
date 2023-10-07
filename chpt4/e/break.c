#include <stdio.h>

int main()
{
    int i=0;
    do 
    {
        printf("value is %d\n", i);
        if (i==4)
        {
            break;   //yeet outta loop
        }
        i++;
    }
    while(i<=50);
    return 0;
}