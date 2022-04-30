#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],k,p=0,i,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    k=sum/n;
    for(i=0;i<n;i++)
    {
        if(a[i]>=k)
        {
            p++;
        }
    }
    printf("%d",p);
    return 0;
}