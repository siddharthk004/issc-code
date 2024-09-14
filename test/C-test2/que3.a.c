#include<stdio.h>
int main()
{
    int k = 0;
    printf("Enter the plot size : \n");
    scanf("%d",&k);

    int arr[k],n = 0,count = 0;

    printf("Enter the Flower bed have plants or not \n 1 and 0 \n");
    for(int i =0;i < k;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the plant : \n");
    scanf("%d",&n);

    if(n+2 < k)
    {
        for(int i =0 ;i< k;i++)
        {
            if(arr[i] == 0)
            {
                count++;
                if(count == n+2)
                {
                    printf("True\n");
                    return 0;
                }
            }
            else
            {
                count = 0;
            }
        }
        printf("False\n");
    }
    else
    {
        printf("Wrong input detected\n");
    }
    return 0;
}