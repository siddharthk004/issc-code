#include<stdio.h>

int whilex(int num,int k,int l)
{
    unsigned long int i=2;
    int pos = -1;
    
    if(num < 2)
    pos = 0;

    while (i <= num/2)
    {
        if(num%i == 0)
        {
            pos = 0;
            break;
        }
        i++;
    
    }
    if(pos != 0)
    {
        l++;
    }
    if((k+1) == l)
    {
        printf("%d a prime number\n",num);
        return 0;
    }
    whilex(num+1,k,l);
    
}

int main()
{
    int n = 0,k=0;
    printf("Enter the nth pos : \n");
    scanf("%d",&n);
    k = whilex(2,n,1);
    
    return 0;
}