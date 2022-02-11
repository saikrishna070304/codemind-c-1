# include <stdio.h>
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
int main()
{
int m,n,i;
scanf("%d%d",&m,&n);
for(i=m;i<=n;i++)
{
    if(i==rev(i))
    printf("%d ",i);
}
return 0;
}