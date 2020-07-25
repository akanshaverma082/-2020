#include <stdio.h>

int main()
{
    int arr[10000],i,n,miss;
    printf("enter the size of an array");
    scanf("%d",&n);
    printf("enter the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(arr[0]!=0)
    miss=0;
    else
    {
        for(i=1;i<n;i++)
        {
            if(arr[i]!=arr[i-1]+1)
            miss=arr[i-1]+1;
        }
    }
printf("the missing no is=%d",miss);
    return 0;
}
