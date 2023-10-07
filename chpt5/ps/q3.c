
#include <stdio.h>

float convertor(float m)
{
    return m*9.81;
}

int main()
{
    float F, m;
    scanf("%f", &m);

    F = convertor(m);
    printf("%.2f", F);
    return 0;
}
