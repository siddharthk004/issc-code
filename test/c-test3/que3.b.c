#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row,col,n =0,flag = 0;

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
    printf("Enter the Elements ; \n");
    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    int num = 0;
    for(int i = 0;i < row;i++)
    {
        num = arr[i][i];
        for(int j = 0;j < col;j++)
        {
            if(j > col)
            {
            }
            else if(i == j)
            {
                if(num == arr[i][j])
                {
                    flag = 1;
                }
            }
        }
    }

    


    return 0;
}