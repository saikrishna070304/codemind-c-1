# include<stdio.h>
int main()
{
int n,count=0,p=0;
scanf("%d",&n);
int a[n],i;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]%2==0)
{
    if(i%2==0)
    {
        count++;
    }
}
if(a[i]%2==0)
{
    p++;
}
}

if(count!=p)
{
printf("False");    
}
else
{
    printf("True");
}
return 0;
}