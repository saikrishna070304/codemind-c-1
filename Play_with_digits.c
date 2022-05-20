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
    int s=0,l,r;
    for(i=0;i<n;i++)
    {
        int h=a[i];
     while(h!=0)
    {
        r=h%10;
        s=s+r;
        h=h/10;
    }
    }
    printf("%d ",s);
    return 0;
}