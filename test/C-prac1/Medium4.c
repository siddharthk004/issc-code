#include<stdio.h>
int main()
{
    int a = 0;
    
    for(int i = 1;i <= 50;i++)
    {
        if(i % 2 == 0)
        {
            a = a+i;
        }
    }
    printf("Sum  of all even number is : %d\n",a);
    
    return 0;
}