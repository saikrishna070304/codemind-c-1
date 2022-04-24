# include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&n);
    int a[n],i,flag=0;
  
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int d;
    for(i=0;i<n;i++)
    {
       if(a[i]%2==0)
       {
           d=i;
       }
    }
    printf("%d",d);
    return 0;
}
