#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size,n,number,flag = 0,id = 0,cnt = 0;
    printf("Enter the size of the array : \n");
    scanf("%d",&n);

    int *arr = (int*)malloc(n*sizeof(int));

    int sum[n][2];
    int i = 0;

    printf("Enter the Elements : \n");
    while (i<n)
    {
        scanf("%d",&arr[i]);
        i++;
    }

    i =0;
    while (i < n)
    {
        sum[i][0] = 0;
        sum[i][1] = 0;
        i++;
    }
    

    i = 0;
    int j=0;
    while (i < n)
    {
        while (j < n)
        {
            if(sum[j][0] == arr[i])
            {
                flag = 1;
                id = j;
            }
            j++;
        }

        if(flag == 1)
            sum[j][1] += 1;
        else
        {
            sum[cnt][0] = arr[i]; 
            cnt++;
        }
        flag = 0;
        i++;
    }
    i = 0;
    while (i < n)
    {
        if(sum[i][1] == 0)
        {
            printf("element is : %d\n",sum[i][0]);
            return 0;
        }
    }
    return 0;
}