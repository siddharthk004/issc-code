#include<stdio.h>
int main()
{
    int pass = 0;

    do
    {
        printf("Enter the password \n");
        scanf("%d",&pass);
    } while (pass != 123);
    
    return 0;
}