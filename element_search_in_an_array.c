# include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&n);
    int a[n],i,flag=0;
  
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(t==a[i])
       flag=1;
    }
    if(flag==1)
    printf("True");
    else
    printf("False");
    return 0;
}