#include<stdio.h>
int counting(int n,int *b,int len)
{
    int i;
    for(i=0;i<len;i++)
    {
      if(b[i]==n)  
      {
          return 0;
      }
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k=0,j,flag=0,b[n],sum=0;
    for(i=0;i<n;i++)
    {
        int c=1;
        if(counting(a[i],b,n))
        {
            b[k]=a[i];
            k++;
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    c++;
                }
            }
            printf("%d %d ",a[i],c);
        }
    }
    
    
    
    return 0;
}