# include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int a[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[j]<a[i]&&i!=j)
            {
                count++;
            }
        }
        printf("%d ",count);
    }
    return 0;
}