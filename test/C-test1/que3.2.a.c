

#include<stdio.h>


int rec(int num,int cnt)
{
    unsigned long int sum = 0,ans = 0;
    while (num != 0)
    {
        ans = num % 10;
        sum = sum + ans*ans;
        num = num / 10;
    }

    if(sum == 1)
    {
        printf("True\t Happy Number\n");
        return 0;
    }
    else
    {
        if(cnt > 10)
        {
            if(sum <= 9)
            {
                printf("False\t Unhappy Number\n%d",cnt);
                return 0;
            }
        }
        rec(sum,cnt+1);
    }
}

int main()
{
    unsigned long int num = 0,count = 0,ans = 0,cnt = 0,k = 0;

    printf("Enter the value of num : \n");
    scanf("%lu",&num);

    ans = rec(num,cnt);

    return 0;
}