# include<stdio.h>
int main()
{
    int n,r,s=0,k=1;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s=s+r;
        k=k*r;
        n=n/10;
    }
    if(s==k)
    printf("Spy Number");
    else
    printf("Not Spy Number");
    return 0;
}