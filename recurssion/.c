#include <stdio.h>
#include<math.h>
int powseries(int );
int powseries(int n)
{
    if(n==1)
    {
    return 1;
    }
    else
    {
        return(powseries(n-1)+pow(n,n));
    }
}

int main()
{
    printf("enter the nth term of the series");
    int n;
    scanf("%d",&n);
    int c=powseries(n);
    printf("%d",c);

    return 0;
}
