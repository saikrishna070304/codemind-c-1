# include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],os=0,es=0,i,d;
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        os=os+a[i];
        else
        es=es+a[i];
    }
if(os>es)
{
    d=os-es;
    printf("%d",d);
}
else
{
    d=es-os;
    printf("%d",d);
}
return 0;
}