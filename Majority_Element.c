# include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,count=0,j,c;
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                count++;
            }
        }
        if (count>=n/2)
        c=a[i];
    }
    printf("%d",c);
    return 0;
}