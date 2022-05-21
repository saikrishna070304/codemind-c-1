#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
    
        for(j=0;j<m;j++)
        {
          sum=sum+a[0][j]; 
        }
    int k=sum;
    for(i=1;i<n;i++)
    {
        sum=0;
        for(j=0;j<m;j++)
        {
            sum=sum+a[i][j];
        }
        if(k<=sum)
        {
            k=sum;
        }
    }
    printf("%d",k);
    return 0;
    
}