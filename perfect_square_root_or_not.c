# include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,flag=0;
    for(i=1;i<n;i++)
    {
        if(n==i*i)
        {
            flag=1;
        }
    }
    if(flag==1)
    printf("True");
    else
    printf("False");
    return 0;
}