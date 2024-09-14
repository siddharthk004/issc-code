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
    if(arr == NULL)
    {
        printf("Error\n");
        exit(0);
    }
    else
    {
        for(int i  = 0;i < row;i++)
        {
            arr[i] = (int*)malloc(col*sizeof(int));
            if(arr[i] == NULL)
            {
                printf("Error\n");
                exit(0);
            }
        }
    }

    printf("Enter the Elements : \n");
    for(int i =0;i < row;i++)
    {
        for(int j =0;j < col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int min = arr[0][0],max = arr[0][1];
    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < col;j++)
        {
            if(arr[i][j] < min)
            {
                min = arr[i][j];
            }
            if(arr[j][i] > max)
            {
                max = arr[j][i];
            }
        }
        if(min <= max)
        {
            printf("%d = Lucky number\n",max);
            return 0;
        }
    }
    printf("no Lucky number found\n");
    return 0;
}