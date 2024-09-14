#include<stdio.h>

int main()
{
    float x = 0;
    int arr[10] = {},sum = 0;

    printf("Enter the 10 numbers : \n");
    for(int i = 0;i < 10;i++)
    {
        scanf("%d",&arr[i]);
    } 

    for(int i = 0;i < 10;i++)
    {
        sum = sum + arr[i];
    }
    x = sum/10;

    if(x > 50)
    {
        x = x/2;
        printf("average of 10 number is : %.3f\n",x);
    }
    else
    {
        printf("average of 10 number is : %.3f\n",x);
    }
    
    return 0;
}