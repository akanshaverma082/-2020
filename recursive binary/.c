#include <stdio.h> 
int binarySearch(int arr[], int l, int r, int search) 
{ 
    if ( l<=r) { 
        int mid = (l + r)  / 2; 

        if (arr[mid] == search) 
            return mid; 
        if (arr[mid] > search) 
            return binarySearch(arr, l, mid - 1,search); 
        else
        return binarySearch(arr, mid + 1, r, search); 
    }
    return -1; 
} 
  
int main() 
{ 
    int arr[10000],n,i,search;
    printf("enter the number of elements in an array");
    scanf("%d",&n);
    printf("enter the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the elements to be searched");
    scanf("%d",&search);
    int x = 10; 
    int result = binarySearch(arr, 0, n - 1, search); 
    if(result == -1)
    printf("no not found");
    else
    printf("no is at index%d",result);
    return 0; 
} 
