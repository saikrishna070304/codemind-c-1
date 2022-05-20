#include<stdio.h>
int is_palindrome(int a)
{
    int k=a,r=0,s=0;
    while(a!=0)
    {
        r=a%10;
        s=s*10+r;
        a=a/10;
    }
    return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0,l;
    for(i=0;i<n;i++)
    {
        int k=a[i];
      l=is_palindrome(k);
        
           printf("%d ",l);
        
    }
    
    return 0;
}