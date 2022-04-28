#include<stdio.h>
int main()
{
    int n, i,j,t;
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
    for(i=n;i>=1;i--)
        {
            printf("%d ",i);
        }
        printf("
");
        t--;
    }
    return 0;
}