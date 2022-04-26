# include<stdio.h>
int main()
{
    int n,d,i;
    scanf("%d",&n);
    int a[n];
    while(n!=0)
    {
        d=n%10;
        a[d]++;
        n=n/10;
    }
    for(i=0;i<10;i++)
    {
        if(a[i]>1)
        {
            printf("Not Unique Number");
            break;
        }
    }
    if(i==10)
    printf("Unique Number");
    return 0;
}