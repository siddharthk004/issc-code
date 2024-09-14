#include<stdio.h>
int main()
{
    int a = 0,b = 0,c = 1,n = 9;
    printf("%d\n",b);
    while (n != 0)
    {
        printf("%d\n",c);
        a = b;
        b = c;
        c = a+b;
        n--;
    }
    
    return 0;
}