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
    int k,b,l=0,c[n],f=0;
    scanf("%d%d",&k,&b);
    for(i=0;i<n;i++)
    {
        if(a[i]>=k &&a[i]<=b)
        {
        c[l]=a[i];
        l++;
        }
    }
    //for(i=0;i<l;i++)
    //printf("%d ",c[i]);
   int max=c[0];
   if(l==0)
   {
       printf("-1");
   }
   else
   {
       for(i=0;i<l;i++)
       {
           if(c[i]<max)
           {
               max=c[i];
           }
       }
       printf("%d",max);
   }
    return 0;
}