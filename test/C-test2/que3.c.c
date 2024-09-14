#include<stdio.h>
int main()
{
    int m , n,count = 0,ind = 0;
    printf("Enter the rows : \n");
    scanf("%d",&m);
    printf("Enter the col : \n");
    scanf("%d",&n);

    int mat[m][n],sum[m][2];

    printf("Enter the elements : 1 and 0\n");
    for(int i =0 ;i < m;i++)
    {
        for(int j =0;j <n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    for(int i =0 ;i < m;i++)
    {
        for(int j = 0;j < n;j++)
        {
            if(mat[i][j] == 1)
            {
                ind = i;
                count++;
            }
        }
            sum[i][0] = ind;
            sum[i][1] = count;
            count = 0;
    }
    sum[0][0] = 0;


    count = 0;
    int max = sum[0][1];
    for(int i =0 ;i < m;i++)
    {
        if(max < sum[i][1])
        {
            count = i;
            max = sum[i][1];
        }
    }
    printf("%d\t%d\n",sum[count][0],sum[count][1]);

    return 0;
}