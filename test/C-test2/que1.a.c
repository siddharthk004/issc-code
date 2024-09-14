#include<stdio.h>
int main()
{
    double darr[5] = {};
    int n=0;
    float sum = 0.0f;

    printf("Enter the elements : \n");
    for(int i = 0;i < 5;i++)
        scanf("%lf",&darr[i]);

    
    for(int i = 0;i < 5;i++)
        sum += darr[i];
    
    printf("Sum of all elements : %.3f\n",sum);

    sum  = 1;
    for(int i = 0;i < 5;i++)
        sum *= darr[i];
    
    printf("product of all elements : %.3f\n",sum);
    
    return 0;
}