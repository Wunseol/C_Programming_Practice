#include <stdio.h>
int main()
{
    int price=0;
    printf("Put your money:");
    
    scanf("%d",&price);

    int change=100-price;

    printf("Here you are:%d\n",change);

    return 0;

}