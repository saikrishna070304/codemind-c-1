#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k,l;
    scanf("%d%d",&k,&l);
    for(i=0;i<n;i++)
    {
        if(a[i]<k||a[i]>l)
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
    return 0;
    
}