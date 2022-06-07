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
    int m,j;
    for(i=0;i<n;i++)
    {
        m=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                m=a[j]*m;
            }
        }
        printf("%d ",m);
    }
    return 0;
}