# include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int a[n],sum=0;
    int i;
    for (i=0;i<n;i++)
    {
        scanf("%llu",&a[i]);
        sum=sum+a[i];
    }
    printf("%llu",sum);
    return 0;
}