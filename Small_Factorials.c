# include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n],j,s=1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=1;
        for(j=a[i];j>1;j--)
        {
            s=s*j;
          
        }
        printf("%d
",s);
    }
    return 0;
}