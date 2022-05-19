#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j || i==n+1-j)
            printf("x");
            else
            {
                printf("0");
            }
        }
        printf("
");
    }
    return 0;
}