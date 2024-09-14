#include<stdio.h>
#include<math.h>

int main()
{
    int x = 0;
    float fans = 0.0;
    printf("Enter the value of X : \n");
    scanf("%d",&x);

    fans = (x*x*x)+2*(x*x)+3*(x+0)*(x+1)/sqrt(x*x);

    printf("Ans is : %.3f",fans);
    
    return 0;
}