#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,k=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            k++;
            break;
        }
    }
    if(k==0)
    printf("yes");
    else
    printf("no");
    return 0;
}