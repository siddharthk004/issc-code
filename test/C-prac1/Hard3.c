#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a = 0,b = 0;

    do
    {
        a = (rand()%6)+1;
        b = (rand()%6)+1;

        printf("%d = %d\n",a,b); 
    } while (a != b);
    
    return 0;
}