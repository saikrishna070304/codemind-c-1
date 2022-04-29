#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n],i=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int count=0;
    for(i=0;i<n;i++)
    {
        if(5-a[i]>=k)
        count++;
    }
    int s=count/3;
    printf("%d",s);
    return 0;
    
}