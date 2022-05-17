#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,j,c=0,k=0;
for(j=1;j<=n;j++)
    {
        c=0;
    for(i=1;i<=j;i++)
    {
        if (j%i==0)
        {
        
            c++;
        }
    }
    if(c==9)
    {
        printf("%d ",j);
        k++;
    }
    
    }
    printf("
");
    printf("Total=%d",k);
    return 0;
}