//simple interest

#include <stdio.h>

int main()
{
    float p, r, n;
    float si;

    printf("enter values foor principal rate and no of years: \n");
    scanf("%f %f %f", &p, &r, &n);

    si = p*r*n/100;
    printf("si will be %.3f", si);
    return 0;
}