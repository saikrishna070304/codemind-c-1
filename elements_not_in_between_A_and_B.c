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
    int k,l,flag=0,p;;
    scanf("%d%d",&k,&l);
    for(i=0;i<n;i++)
    {
        if(a[i]<k||a[i]>l)
        {
            printf("%d ",a[i]);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
   
    return 0;
    
}