#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,r,s=0,d,a;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        d=a;
        s=0;
        while(d!=0)
        {
            r=d%10;
            s=s*10+r;
            d=d/10;
        }
        if(a==s)
        printf("True
");
        else
        printf("False
");
    }
    return 0;
}