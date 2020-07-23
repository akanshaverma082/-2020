#include <stdio.h>
void sumarr(int arr[],int i,int sum)
{
    if(i<0)
    {
        printf("%d",sum);
        return;
    }
     if(arr[i]%2==0)
        {
        sum=sum+arr[i];
        }
        sumarr(arr,i-1,sum);
    
}

int main()
{
    int arr[10000];
    int sum=0,n;
    printf("enter no of elements in the array");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
sumarr(arr,n-1,sum);
    return 0;
}
