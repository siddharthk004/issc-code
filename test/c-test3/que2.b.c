#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size,n,number,flag = 0,index = 0,i=0;
    printf("Enter the size of the array : \n");
    scanf("%d",&n);

    int *arr = (int*)malloc(n*sizeof(int));


    printf("Enter the Ascending order Elements : \n");
    while (i<n)
    {
        scanf("%d",&arr[i]);
        i++;
    }

    printf("Enter the Target : \n");
    scanf("%d",&number);

    i = 0;
    while (i < n)
    {
        if(arr[i] == number)
        {
            index = i;
            break;
        }
        else if (number > arr[i] && number < arr[i+1])
        {
            index = i+1;
            break;
        }
        i++;
    }

    printf("index = %d\n",number);

    return 0;
}