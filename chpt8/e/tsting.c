
#include <stdio.h>
#include <string.h>

int main()

{
    char arr[10] = "hmm";
    char *ptr = "aaa";

    printf("%s\n", arr);
    printf("%s\n", ptr);

    arr[10] = "hmmm";
    ptr = "aaaa";

    printf("%s\n", arr);
    printf("%s\n", ptr);

    return 0;
}

//summary
// while redifining normally we cant modify arr[10] but we can change ptr
// however while using strcpy, we cant modily ptr but we can change arr[10] hmmmmm 