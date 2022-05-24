#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k,b,l=0,c[n],flag=0;
    scanf("%d%d",&k,&b);
    for(i=0;i<n;i++)
    {
        if(a[i]<k || a[i]>b)
        {
    
        c[l]=a[i];
        l++;
        }
    }
    //for(i=0;i<l;i++)
    //printf("%d ",c[i]);
   if(l==0)
   printf("-1");
   else
   {
       int min=c[0];
       for(i=0;i<l;i++)
       {
           if(c[i]<min)
           min=c[i];
       }
       printf("%d",min);
   }
    return 0;
}