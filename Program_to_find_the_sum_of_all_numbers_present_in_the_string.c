#include<stdio.h>
int main()
{
    int i,count,sum=0;
    char s[1000];
    scanf("%s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>='0' && s[i]<='9')
        sum=sum+(s[i]-'0');
    }
    printf("%d",sum);
}