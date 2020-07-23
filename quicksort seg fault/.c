#include <stdio.h>
void swap(int* a, int* b)
{
int t = *a;
*a = *b;
*b = t;
}
int partition(int a[],int lb,int ub)
{
    int temp;
   int  pivot=a[lb];
    int start=lb;
    int end=ub;
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
           swap(a[end],a[start]);
        }
    }
   swap(a[lb],a[end]);
   
    return end;
    
}
void quicksort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int loc=partition(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);
    }
}

int main()
{
    int a[100000],n,i,lb,ub;
    printf("enter the size of the array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
lb=0;
ub=n-1;
quicksort(a,lb,ub);
for(i=0;i<n;i++)
{
    printf("%d",a[i]);
    
}
    return 0;
    }
