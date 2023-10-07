
#include <stdio.h>

float convertor(float cel)
{
    return (9*cel/5)+32;
}

int main()
{
    float cel, fre;
    scanf("%f", &cel);

    fre = convertor(cel);
    printf("%.2f", fre);
    
    return 0;
}