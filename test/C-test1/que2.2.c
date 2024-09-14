#include<stdio.h>

int main()
{
    int num = 0;

    printf("Enter the value : \n");
    scanf("%d",&num);

    if(num >= 90)
    {
        printf("A\n");
    }
    else if(num >= 80 && num <= 89)
    {
        printf("B\n");
    }
    else if(num >= 70 && num <= 79)
    {
        printf("C\n");
    }
    else if(num >= 60 && num <= 69)
    {
        printf("D\n");
    }
    else
    {
        printf("Enter another number \n");
    }
    
    
    return 0;
}