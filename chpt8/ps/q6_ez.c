
#include <stdio.h>
#include <string.h>

void encrypt(char s[100])
{
    char *ptr = s;
    while(*ptr!='\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}

void decrypt(char s[100])
{
    char *ptr = s;
    while(*ptr!='\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main()
{
    char s[100], temp[100];
    gets(s);
    strcpy(temp, s);

    encrypt(s);
    printf("%s\n", s);

    strcpy(s, temp);

    decrypt(s);
    printf("%s", s);

    return 0;
}