# include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n],i,j,x;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            a[i][j]='0';
            else
            a[i][j]='x';
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%c",a[i][j]);
        }
        printf("
");
    }
    return 0;
}