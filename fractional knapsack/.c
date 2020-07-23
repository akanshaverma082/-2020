#include <stdio.h>

int main()
{
   int n,i,j;
   float weight[1000],profit[10000],ratio[1000],max,temp,profitf=0,d;
   printf("enter no of objects and max weight");
   scanf("%d",&n);
   scanf("%f",&max);
   printf("enter the weight of objects");
   for(i=0;i<n;i++)
   {
       scanf("%f",&weight[i]);
   }
   printf("enter the profit");
   for(i=0;i<n;i++)
   {
       scanf("%f",&profit[i]);
   }
for(i=0;i<n;i++)
{
    ratio[i]=profit[i]/weight[i];
}
for (i = 0; i < n; i++) {
      for (j = i + 1; j < n; j++) {
         if (ratio[i] < ratio[j]) {
            temp = ratio[j];
            ratio[j] = ratio[i];
            ratio[i] = temp;

            temp = weight[j];
            weight[j] = weight[i];
            weight[i] = temp;

            temp = profit[j];
            profit[j] = profit[i];
            profit[i] = temp;
         }
      }
}
for(int i=0;i<n;i++)
{
    if(max>=0)
    {
    if(max>weight[i])
    {
        max=max-weight[i];
        profitf=profitf+profit[i];
        
    }
    else
    {
        d=(profit[i]*max)/weight[i];
        profitf=profitf+d;
    }
    }
}
     
  printf("%f the profit is",profitf); 

}
    
    
    
    
    
    
