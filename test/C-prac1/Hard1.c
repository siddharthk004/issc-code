#include<stdio.h>
int main()
{
    int num = 0;
    printf("Enter the number of rows : \n");
    scanf("%d",&num);

    for(int i = 0;i < num;i++)
    {
        int nu = 1;
        for(int j = 0;j < num-i-1;j++)
        {
            printf(" ");
        }

        for(int k = 0;k <= i;k++)
        {
            printf("%d ",nu);
            nu = nu*(i-k)/(k+1);
        }
        printf("\n");
    }
           
    return 0;
}