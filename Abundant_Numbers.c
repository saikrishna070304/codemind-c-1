# include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        sum=i+sum;
    }
    if(sum>n)
    printf("True");
    else
    printf("False");
    return 0;
}