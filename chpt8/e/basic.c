
//string more like char array 
#include <stdio.h>

int main()
{
    char s[] = {'a', 'e', 'i', '\0'};
    char q[] = "aoe"; //compiler auto adds a \0

    //old way
    // char *ptr = s;
    // char ptr[] = s; //another method of declaration
    // while (*ptr!='\0')
    // {
    //     printf("%c", *ptr);
    //     ptr++;
    // }

    //better way
    // char p[] = "yeeeeee boi";
    // char r[10];
    // scanf("%s", r); //only single word tho, works w and wo & heh?

    // // printf("%s ",p);
    // printf("%s",r);

    //even better way for multiple words
    char mul[3];
    gets(mul);   //limit doesnt aply for gets
    printf("%s", mul);
    puts(mul);
    return 0;
}