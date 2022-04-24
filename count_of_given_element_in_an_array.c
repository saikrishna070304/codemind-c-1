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
    scanf("%d",&t);
    int d;
    for(i=0;i<n;i++)
    {
       if(a[i]==t)
       {
           d++;
       }
    }
    printf("%d",d);
    return 0;
}
