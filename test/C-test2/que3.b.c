#include<stdio.h>
int main()
{
    int n = 0;
    printf("Enter the length : \n");
    scanf("%d",&n);

    int arr[n][n],temp = 0,ans = 0;

    printf("Enter the elements : 1 and 0 only\n");
    for(int i =0 ;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    if(n % 2 == 0)
    {
        ans = n/2;
        for(int i = 0 ;i < ans;i++)
        {
            temp = arr[i][0];
            arr[i][0] = arr[i][n-i];
            arr[i][n-i] = temp;
        }
    }
    else
    {
        ans = n/2;
        for(int i = 0 ;i < ans;i++)
        {
            temp = arr[i][0];
            arr[i][0] = arr[i][n-i];
            arr[i][n-i] = temp;
        }
    }

    for(int i =0 ;i < 3;i++)
    {
        temp = arr[i][0];
        arr[i][0] = arr[i][2];
        arr[i][2] = temp;
    }

    for(int i =0 ;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            if(arr[i][j] == 1)
            {
                arr[i][j] = 0;
            }
            else
            {
                arr[i][j] = 1;
            }
        }
    }

    for(int i =0 ;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}