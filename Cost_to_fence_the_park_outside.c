# include <stdio.h>
int main()
{
int l,b,w,c,amount;
scanf("%d%d%d%d",&l,&b,&w,&c);
amount=c*(2*(l+2*w)*(w))+c*2*(w*b);
printf("%d",amount);
return 0;
}