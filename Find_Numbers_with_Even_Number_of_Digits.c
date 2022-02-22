# include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
       scanf("%d ",&a[i]);
    }
    int count=0,p=0,r;
    for(i=0;i<n;i++)
    {
    count=0;
        while(a[i]!=0)
        {
            r=a[i]%10;
            count++;
            a[i]=a[i]/10;
        }
        if(count%2==0)
        {
            p++;
        }
    }
    printf("%d",p);
    return 0;
}