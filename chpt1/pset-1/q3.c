//temp conversion

#include <stdio.h>

int main()
{
    float cel;
    float far;

    printf("enter temp in celcius \n");
    scanf("%f", &cel);

    far = 1.8*cel + 32;
    printf("temp in farenheit will be %.3f",far);
    return 0;
}
