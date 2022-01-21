# include <stdio.h>
int main()
{
int a,i,f=0;
scanf("%d",&a);
for(i=1;i<a;i++)
{
if(i*i==a)
{
    f=1;
    break;
}
}
if (f==1)
{
    printf("True");
}
else 
{
    printf("False");
}
return 0;
}