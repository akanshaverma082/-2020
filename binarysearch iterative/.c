#include <stdio.h> 
int binarySearch(int arr[], int l, int r, int num) 
{ 
    while (l <= r) { 
        int mid = (l + r) / 2;
        if (arr[mid] == num) 
            return mid;
        if (arr[mid] < num) 
            l = mid + 1; 
  
        else
            r = mid - 1; 
    } 
    return -1;
} 
  
int main() 
{ 
    int arr[1000],n,i,search,num;
    printf("enter the no of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the number to be searched");
    scanf("%d",&num);
    
    int result = binarySearch(arr, 0, n - 1, num); 
    if(result==-1)
    printf("no not found");
    else
     printf("Element is present at%d",result);
    return 0; 
} 
