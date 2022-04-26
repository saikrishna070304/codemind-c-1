#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,count=0,s=0,k=0,p=0,gate=0,flag=0,r;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    flag=1;
    while(n!=0)
    {
        r=n%10;
        s++;
        p=0;
        for(j=1;j<=r;j++)
        {
            if(r%j==0)
            p++;
        }
             if(p==2)
            k++;
        n=n/10;
    }
    if(flag==1&&s==k)
    printf("Mega Prime");
    else
    printf("Not Mega Prime");
    return 0;
    
}