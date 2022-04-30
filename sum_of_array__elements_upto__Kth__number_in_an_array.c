#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    int a[n],i,p=0,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            break;
        }
        else
        {
            sum=sum+a[i];
        }
    }
    
    printf("%d",sum+k);

    return 0;
}