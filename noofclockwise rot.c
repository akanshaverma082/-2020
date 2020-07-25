#include <stdio.h>
//clockwise rotation ascending order
int main()
{
    int arr[10000],n,i,max,rot,norot;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter a circular sorted array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[i];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==max)
        {
            rot=i;
            break;
    
        }
        
    }
    norot=(n-1)-rot;
    printf("no of times array has been rotated=%d",norot);

    return 0;
}

