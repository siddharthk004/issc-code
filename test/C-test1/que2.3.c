#include<stdio.h>

int main()
{
    int x = 0, y = 0,ans = 1;

    printf("Enter the value of x : \n");
    scanf("%d",&x);

    printf("Enter the value of y : \n");
    scanf("%d",&y);
    for(int i = 1;i <= y;i++)
    {
        ans = ans*x;
    }

    printf("Power of a number %d^%d = %d\n",x,y,ans);
    
    return 0;
}