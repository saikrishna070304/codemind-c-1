# include<stdio.h>
int is_prime(int n)
{
    int i;
    if(n==1)
    return 0;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
void primes_in_range(int a,int b)
{
    int i,count=0;
    for(i=a;i<=b;i++)
    {
        if(is_prime(i)==1)
        {
            count++;
        }
    }
        printf("%d",count);
    
}
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
     primes_in_range(x,y);
    return 0;

}