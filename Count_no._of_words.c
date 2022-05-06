#include<stdio.h>
int main()
{
    char ch[100];
    scanf("%[^
]s",ch);
    int count=1,i;
    for(i=0;ch[i]!=NULL;i++)
{
    if(ch[i]==' ')
count=count+1;	
}
    printf("%d",count);
    return 0;
}