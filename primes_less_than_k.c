#include<stdio.h>
int is_prime(int a)
{
    int i;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        return 0;
    }
    if(a==1)
    {
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int l,res=0;
    scanf("%d",&l);
    for(i=0;i<n;i++)
    {
        if(a[i]<=l)
        {
            int k=a[i];
            if(is_prime(k)==1)
            {
                res++;
            }
        }
    }
    printf("%d",res);
    return 0;
}