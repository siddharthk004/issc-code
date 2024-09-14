#include<stdio.h>
int main()
{
    int a = 10,sum = 0;
    for(int i = 1;i <= 10;i++)
    {
        sum = sum + i;
    }

    printf("Sum is : %d\n",sum);    
    return 0;
}