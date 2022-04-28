#include<stdio.h>
int main()
{
    int n, i,j,t;
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
    for(i=1;i<=n-2;i++)
        {
            printf("%d",i);
        }
        for(j=1;j<=n-3;j++)
        printf("%d",j);
        printf("
");
        t--;
    }
    return 0;
}