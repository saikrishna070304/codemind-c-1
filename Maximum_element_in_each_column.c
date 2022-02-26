# include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int a[r][c],i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
    int max;
    for(i=0;i<c;i++)
    {
        max=a[0][i];
        for(j=0;j<r;j++)
        {
            if(a[j][i]>max)
            max=a[j][i];
        }
        printf("%d
",max);
    }
    return 0;
}