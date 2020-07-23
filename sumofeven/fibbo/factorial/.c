#include <stdio.h>
int fact(int );

int main()
{
    int n,b;
    printf("enter the number");
    scanf("%d",&n);
    b=fact(n);
    printf("%d",b);
    

    return 0;
}
int fact(int n)
{
    if(n>0)
    {
    if(n==1)
    {
        return 1;
    }
    else
    {
        return(fact(n-1)*n);
    }
    }
    else
    {
        return 1;
    }
}

