#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row,col,n =0,flag = 0;

    printf("Enter the row : \n");
    scanf("%d",&row);

    int *arr = (int *)malloc(row*sizeof(int));
    if(arr == NULL)
    {
        printf("Error\n");
        exit(0);
    }

    printf("Enter the 0 and 1 : \n");
    for(int i = 0 ;i < row;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i = 1;i < row-1;i++)
    {
        if(arr[i] == 0)
        {
            if(i == 1 && arr[i-1] == 0)
            {
                flag++;
                arr[i-1] = 1;
            }
            else if(arr[i+1] == 0 && arr[i-1] == 0)
            {
                flag++;
                arr[i] = 1;
            }
            if(i == row-2 && arr[row-1] == 0)
            {
                flag++;
                arr[i] = 1;
            }

        }
    }

    printf("Enter the people To Want Seated : \n");
    scanf("%d",&col);

    if(col <= flag)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}