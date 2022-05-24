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
    int k,b,f=0;
    scanf("%d%d",&k,&b);
    for(i=0;i<n;i++)
    {
        if(a[i]>=k &&a[i]<=b)
        {
        printf("%d ",a[i]);
        f++;
        }
    }
    if(f==0)
    printf("-1");
    return 0;
}