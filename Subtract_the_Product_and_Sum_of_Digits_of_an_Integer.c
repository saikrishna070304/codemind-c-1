# include<stdio.h>
int main()
{
    int n,r,d,count=0,p=1;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        count=r+count;
        p=p*r;
        n=n/10;
    
    d=p-count;
    }
    printf("%d",d);
    return 0;
}