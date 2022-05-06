#include<stdio.h>
int main()
{
    char ch[100];
    scanf("%[^
]s",ch);
    int count=0,i;
    for(i=0;ch[i]!=NULL;i++)
{
count=count+1;	
}
    printf("%d",count);
    return 0;
}