#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size,n,number,flag = 0;
    printf("Enter the size of the array : \n");
    scanf("%d",&n);

    int *arr = (int*)malloc(n*sizeof(int));


    printf("Enter the Elements : \n");
    for(int i= 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int i = 0;
    while (i < n-1)
    {
        int j = i+1;
        while (j < n)
        {
            if(arr[i] == arr[j])
            {
                flag = 1;
            }
            j++;
        }
        i++;
    }
    if(flag == 0)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}