# include<stdio.h>
int fibnaco(int n)
    {
        if(n==0)
        return 0;
        else if(n==1)
        return 1;
        else
        return (fibnaco(n-1)+fibnaco(n-2));
    }
int main()
{
    int n;
    scanf("%d",&n);
    int i,res;
    for(i=0;i<n;i++)
    {
        res=fibnaco(i);
        printf("%d ",res);
    }
return 0;
    }
    
