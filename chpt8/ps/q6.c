
// :DDDDDDDDDDDDDDDDDDDDDDDDDDDD

#include <stdio.h>
#include <string.h>

char encrypt(char ptr1[100], int len)
{
    for (int i=0; i<=len; i++)
    {
        char c = ptr1[i];
        int temp = (int)c;
        temp = temp+1;
        ptr1[i] = (char) temp;
        // c = '\0';
    }
    ptr1[len] = '\0';
    printf("After Encryption: %s\n", ptr1);
}   

char decrypt(char ptr2[100], int len)
{
    for (int i=0; i<=len; i++)
    {
        char c = ptr2[i];
        int temp = (int)c;
        temp = temp-1;
        ptr2[i] = (char) temp;
        // c = '\0';
    }
    ptr2[len] = '\0';
    printf("After Decryption: %s", ptr2);
}   

int main()
{
    char ptr[100];
    gets(ptr);

    char temp2[100];
    strcpy(temp2, ptr);

    int len;
    len = strlen(ptr);

    encrypt(ptr, len);
    decrypt(temp2, len);

    return 0;
}