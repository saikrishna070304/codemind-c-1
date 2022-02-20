# include<stdio.h>
int main()
{
    int n,s,p=0,r;
    scanf("%d",&n);
    s=n*n;
    while(s>0)
    {
        r=s%10;
        p+=r;
        s=s/10;
    }
    if(p==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
    return 0;
}