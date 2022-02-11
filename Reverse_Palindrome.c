# include<stdio.h>
int rev(int x)
{
    int r,rev=0;
    while(x!=0)
    
    {
        r=x%10;
        rev=rev*10+r;
        x=x/10;
    }
    return rev;
}
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int u;
    scanf("%d",&u);
    do
    {
      u=add(u,rev(u));  
    }while(u!=rev(u));
    
    printf("%d",u);
    return 0;
}