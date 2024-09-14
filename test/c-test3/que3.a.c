#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row,col,n =0;

    printf("Enter the row : \n");
    scanf("%d",&row);

    printf("Enter the col : \n");
    scanf("%d",&col);

    int **arr = (int **)malloc(row*sizeof(int));
    int **brr = (int **)malloc(row*sizeof(int));
    int **crr = (int **)malloc(row*sizeof(int));
    if(arr == NULL && brr == NULL && crr == NULL)
    {
        printf("Error\n");
        exit(0);
    }
    else
    {
        for(int i  = 0;i < row;i++)
        {
            arr[i] = (int*)malloc(col*sizeof(int));
            brr[i] = (int*)malloc(col*sizeof(int));
            crr[i] = (int*)malloc(col*sizeof(int));
            if(arr[i] == NULL && brr[i] == NULL && crr[i] == NULL)
            {
                printf("Error\n");
                exit(0);
            }
        }
    }

    printf("Enter the Elements of first matrix : \n");
    for(int i =0;i < row;i++)
    {
        for(int j =0;j < col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("Enter the Elements of second matrix : \n");
    for(int i =0;i < row;i++)
    {
        for(int j =0;j < col;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }

    printf("Addition of two matrix : \n");
    for(int i =0;i < row;i++)
    {
        for(int j =0;j < col;j++)
        {
            printf("%d\t",arr[i][j]+brr[i][j]);
        }
        printf("\n");
    }

    printf("Substraction of two matrix : \n");
    for(int i =0;i < row;i++)
    {
        for(int j =0;j < col;j++)
        {
            printf("%d\t",arr[i][j]-brr[i][j]);
        }
        printf("\n");
    }

    for(int i =0;i < row;i++)
    {
        for(int j =0;j < col;j++)
        {
            crr[i][j] = 0;
            for(int k = 0;k < row;k++)
            {
                crr[i][j] += arr[i][k]*brr[k][j];
            }
        }
    }

    printf("Multiplication of two matrix : \n");
    for(int i =0;i < row;i++)
    {
        for(int j =0;j < col;j++)
        {
            printf("%d\t",crr[i][j]);
        }
        printf("\n");
    }

    return 0;
}