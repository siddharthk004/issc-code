#include<stdio.h>
int main()
{
    int m,n,max = 0,sum = 0,count = 0;
    
    printf("Enter row size :\n");
    scanf("%d",&m);

    printf("Enter col size :\n");
    scanf("%d",&n);

    int arr[m][n];
    
    printf("Enter the details : \n");
    for(int i =0 ;i < m;i++)
    {
        for(int j =0 ;j < n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int i = 0;
    for(i =0 ;i < m;i++)
    {
        for(int j =0 ;j < n;j++)
        {
            sum += arr[i][j];
        }
        if(max < sum)
        {
            max = sum;
            count = i;
        }
        sum = 0;
    }

    printf("Maximum wealth is : %d\t%d\n",count,max);
    
    return 0;
}