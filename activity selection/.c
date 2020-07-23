#include <stdio.h>

int main()
{
int act[1000],start[10000],finish[100000],n,i,j,temp,c=0;
printf("enter no of activities ");
scanf("%d",&n);
printf("enter the activities number");
for(i=0;i<n;i++)
{
    scanf("%d",&act[i]);
}
printf("enter the start time");
for(i=0;i<n;i++)
{
    scanf("%d",&start[i]);
}
printf("enter the finish time");
for(i=0;i<n;i++)
{
    scanf("%d",&finish[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
    if(finish[j]<finish[i])
    {
        temp=finish[i];
        finish[i]=finish[j];
        finish[j]=temp;
        
        temp=act[i];
        act[i]=act[j];
        act[j]=temp;
        
        temp=start[i];
        start[i]=start[j];
        start[j]=temp;
        
        
    }
}
}
printf("%d",act[0]);
for(i=1;i<n;i++)
{
    if(start[i]>=finish[i-1])
    {
    printf("%d",act[i]);
    c=c+1;
    }
}
printf("total no of activities completed%d",c+1);
}
