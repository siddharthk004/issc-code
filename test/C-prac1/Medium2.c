#include<stdio.h>
int main()
{
    int a = 0,fact = 1;

    printf("Enter a number : \n");
    scanf("%d",&a);

    while (a != 0)
    {
        fact = fact*a;
        a--;
    }

    printf("Factorial is : %d\n",fact);
    
    return 0;
}