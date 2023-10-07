
#include <stdio.h>
#include <string.h>

void reee(char s[100], char c)
{   
    int a=0;
    for (int i=0; s[i]!='\0'; i++)
    {
        if(s[i]==c)
        {
            printf("cahracter is present");
            a = 1;
            break;
        }
    }
    if (a==0)
    {
        printf("char is absent");
    }
}

int main()
{
    char s[100];
    char c;

    gets(s);
    scanf("%c", &c);

    reee(s, c);

    return 0;
}