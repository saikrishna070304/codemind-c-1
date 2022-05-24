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
        
        l=l+a[i];
        }
    }
    //for(i=0;i<l;i++)
    //printf("%d ",c[i]);
  
   printf("%d",l);
    return 0;
}