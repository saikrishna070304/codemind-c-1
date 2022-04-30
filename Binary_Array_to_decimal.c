#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],j,i,count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=n-1;i<n,j>=0;i++,j--)
    {
    
        count=count+a[i]*pow(2,j);
    }
    printf("%d",count);
    return 0;
}