#include<stdio.h>
int main()
{
    int a,b,c;
    int i,j,k;
    scanf("%d%d%d",&a,&b,&c);
    scanf("%d%d%d",&i,&j,&k);
    int s=0,d=0;
    if(a>i)
    s++;
    if(i>a)
    d++;
    if(b>j)
    s++;
    if(j>b)
    d++;
    if(c>k)
    s++;
    if(k>c)
    d++;
printf("%d %d",s,d);
return 0;
}
    