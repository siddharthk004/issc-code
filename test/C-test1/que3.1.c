

#include<stdio.h>


int rec(int num)
{
    int sum = 0,ans = 0;
    while (num != 0)
    {
        ans = num % 10;
        sum = sum + ans;
        num = num / 10;
    }

    if(sum < 9)
    {
        printf("%d\n",sum);
        return 0;
    }
    else
    {
        rec(sum);
    }
}

int main()
{
    int num = 0,ans = 0;

    printf("Enter the value of num : \n");
    scanf("%d",&num);

    ans = rec(num);

    return 0;
}