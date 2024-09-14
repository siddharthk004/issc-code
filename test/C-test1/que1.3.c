#include<stdio.h>
#include<math.h>

int main()
{
    int x = 0;
    float fans = 0.0;
    printf("Enter the value of X : \n");
    scanf("%d",&x);

    fans = 10+sqrt(6*x*x+0*x*x*x+(x+1)*(x))/2;

    printf("Ans is : %.3f",fans);
    
    return 0;
}