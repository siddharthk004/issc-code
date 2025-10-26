

#include<stdio.h>
int main()
{
    int arr[10] = {};
    printf("Enter 10 values : \n");
    for(int i  =0 ;i < 10;i++)
    scanf("%d",&arr[i]);

    int max = arr[0],min = arr[0];
    for(int i = 1;i<10;i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
        if(min > arr[i])
        {
            min = arr[i];
        }
    }

    printf("Minimun value is : %d\n",min);
    printf("Maximum value is : %d\n",max);
    
    return 0;
}