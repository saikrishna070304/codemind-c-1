#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1,c;
    int i,flag=0;
    for(i=3;i<n;i++)
    {
        c=a+b;
        if (c==n)
        {
            printf("True");
            flag=1;
            break;
        }
        a=b;
        b=c;
    }
    if (flag==0)
    {
        printf("False");
    }
    return 0;
}