#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,p=0,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        sum=sum+a[i];
    }
    for(i=n/2;i<n;i++)
    {
        p=p+a[i];
    }
    printf("%d
",sum);
    printf("%d",p);
    return 0;
}