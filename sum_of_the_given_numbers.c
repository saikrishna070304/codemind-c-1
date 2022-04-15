#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
 signed int n1,n2,sum;
    while(n!=0)
    {
        scanf("%d%d",&n1,&n2);
        sum=n1+n2;
        printf("%d
",sum);
        n--;
    }
    return 0;
}