
#include <stdio.h>

int main()
{
    float salary, tax;
    printf("enter ur salary: ");
    scanf("%f", &salary);
    salary = salary/100000;

    if (2.5<=salary && salary<5)
    {
        tax = salary*5/100;
        printf("tax paid will be %.2f \n", tax);
    }
    else if (5<=salary && salary<10)
    {
        tax = salary*20/100;
        printf("tax paid will be %.3f \n", tax);
    }
    else if (salary>=10)
    {
        tax = salary*30/100;
        printf("tax paid will be %.4f \n", tax);
    }
    else
    {
        printf("income too low to be taxed.");
    }
    return 0;
}