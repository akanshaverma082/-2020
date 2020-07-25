#include <stdio.h>
//anticlockwise rotation ascending order
int main()
{
    int arr[10000],n,i,min,rot;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter a circular sorted array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==min)
        {
            rot=i;
            break;
    
        }
        
    }
    printf("no of times array has been rotated=%d",rot);

    return 0;
}
