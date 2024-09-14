#include<stdio.h>
int main()
{
    int num = 0;

    do
    {
        printf("Enter number : \n");
        scanf("%d",&num);
    } while (num <= 100);
           
    return 0;
}