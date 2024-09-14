#include<stdio.h>

int main()
{
    int num = 0,ans = 0,count = 0,fc = 0;

    printf("Enter the value of num : \n");
    scanf("%d",&num);
    fc = num;

    while (num != 0)
    {
        ans = num % 10;
        if(fc%ans == 0)
            count++;
        num = num / 10;
    }

    if(fc <= 9)
    {
        printf("Divide itself : %d\n",count);
    }
    else
    {
        printf("Answer is : %d\n",count);
        
    }

    return 0;
}