#include<stdio.h>
int main()
{
    char i,j;
    int n,t;
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
    for(i=65+n-1;i>=65;i--)
    {
        for(j=t;j>=1;j--)
        printf("%c ",i);
        printf("
");
        t--;
    
    }
    }
    return 0;
}