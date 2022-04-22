# include<stdio.h>
int main()
{
    int a,b,g;
    scanf("%d %d",&a,&b);
    int i;
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        g=i;
    }
    printf("%d",g);
    return 0;
}