# include<stdio.h>
int main()
{
    int n,r,c,s=0;
    scanf("%d",&n);
    c=n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(s==c)
{
    printf("True");
}
else
{
printf("False");
}
return 0;
}