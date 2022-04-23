# include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r,min=0;
    while(n!=0)
    {
        r=n%10;
    
        if(r>min)
        {
            min=r;
        }
        n=n/10;
    }
    printf("%d",min);
    return 0;
}