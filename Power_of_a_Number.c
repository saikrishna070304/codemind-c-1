# include<stdio.h>
# include<math.h>
int main()
{
    int x,y,m,k,d;
    scanf("%d%d%d",&x,&y,&m);

    d=pow(x,y);
k=d%m;
printf("%d",k);
return 0;
}