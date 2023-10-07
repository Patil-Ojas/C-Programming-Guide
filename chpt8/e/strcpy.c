
#include <stdio.h>
#include <string.h>

int main()
{
    char *aa = "frisn";  //this is unchangeable 
    char bb[10]= "aljcn";  // this however is changable
    
    printf("umm %s\n", bb);

    // doest work for either
    // strcpy(aa, "sike"); 
    // strcpy(bb, "sike"); 

    strcpy(bb, aa);

    printf("uhh %s\n", aa);
    printf("umm %s", bb);

    return 0;   
}