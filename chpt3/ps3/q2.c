
#include <stdio.h>
/*
//switch not for me
int main()
{
    int m1, m2, m3;
    float m;
    printf("enter marks: \n");
    scanf("%d %d %d", &m1, &m2, &m3);

    m = (m1+m2+m3)/100;
    switch (m1>=33 && m2>=33 && m3>=33 && m>=40)
    {
    case True:
        printf("pass");
        break;

    default:
        printf("fail");
        break;
    }
}
*/

int main()
{
    float m1, m2, m3;
    float m;
    printf("enter marks: \n");
    scanf("%f %f %f", &m1, &m2, &m3);

    m = (m1+m2+m3)/3;
    
    if (m1>=33 && m2>=33 && m3>=33 && m>=40)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }
    return 0;
}