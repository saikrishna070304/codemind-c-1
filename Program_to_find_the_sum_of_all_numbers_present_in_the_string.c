# include<stdio.h>
# include<string.h>
int main()
{
    char s[100],i,sum=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>=48&&s[i]<=57)
        {
            sum=sum+(s[i]-48);

        }
    }
    printf("%d",sum);
    return 0;
}