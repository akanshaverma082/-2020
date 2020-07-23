#include <stdio.h>
int fib(int n);
int fib(int n)
{
    if(n==1)
    {
        return(0);
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        return(fib(n-1)+fib(n-2));
    }
}

int main()
{
    int n;
    printf("enter the value");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       int  c=fib(i);
       printf("%d",c);
    }

    return 0;
}

