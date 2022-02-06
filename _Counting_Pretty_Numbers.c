# include <stdio.h>
int main()
{
    int l,r,n,k,count,i;
    scanf("%d",&n);
    while(n-->0)
    {
    scanf("%d%d",&l,&r);
    count=0;
    for (i=l;i<=r;i++)
    {
        
        k=i%10;
        if(k==2||k==3||k==9)
        {
            count++;
        }
    }
            printf("%d
",count);
    
    }
    return 0;
}