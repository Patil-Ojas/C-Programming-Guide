//integer size for diff sys is diff for me its 4 bytes, thus 
//add is changed by 4 whenever we inc or dec

//when we inc or dec a char value, the add will in or dec 
//by 1 instead of 4


#include <stdio.h>

int main()
{
//    int i = 34;
//    int *ptr = &i;

    char c = 34;
    char *ptr = &c;
    
    printf("The value of ptr is %u\n", ptr);
    printf("%u \n", ptr);
    ptr++;
    printf("%u\n", ptr);
    ptr--;
    printf("%u\n", ptr);
    ptr = ptr+1;
    printf("%u\n", ptr);
    ptr = ptr-1;
    printf("%u\n", ptr);
    return 0;
}