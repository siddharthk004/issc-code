#include<stdio.h>
int main()
{
    int arr[3][3],brr[3][3],crr[3][3],sum = 0;

    printf("Enter matrix a : \n");
    for(int i =0 ;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Enter matrix b : \n");
    for(int i =0 ;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }


    for(int i =0 ;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            crr[i][j] = 0;
            for(int k = 0;k < 3;k++)
            {
                crr[i][j] += arr[i][k]*brr[k][j];
            }
        }
    }

    printf("result are : \n");
    for(int i =0 ;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            printf("%d\t",crr[i][j]);
        }
        printf("\n");
    }

    return 0;
}