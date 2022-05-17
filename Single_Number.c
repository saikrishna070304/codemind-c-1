#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int j,k=0;
    for (i=0;i<n;i++)
    {
        k=0;
        for (j=0;j<n;j++)
        {
            if(i!=j && a[i]==a[j])
            k++;
        }
        if (k==0)
        printf("%d",a[i]);
    }
    return 0;
}