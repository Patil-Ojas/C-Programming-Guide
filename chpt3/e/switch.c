
#include <stdio.h>

int main()
{
    int rating;
    printf("enter ur rating: ");
    scanf("%d",&rating);

    switch(rating)
    {
        case 155:
        printf("your rating is 155 \n");
        printf("aaaa\n");
        break;

        case 2:
        printf("your rating is 2 \n");  
        break;

        case 3:
        printf("your rating is 3 \n");
        break;

        case 4:
        printf("your rating is 4 \n");
        break;

        case 5:
        printf("your rating is 5 \n");
        break;

        default:
        printf("invalid rating bru\n");
        break;
    }   
}