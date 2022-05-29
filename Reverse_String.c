#include<stdio.h>
#include<string.h>
int main()
{
    int l,i;
    char s[1000],ch;
    scanf("%[^
]s",s);
    l=strlen(s);
    for(i=0;i<=l/2;i++)
    {
        ch=s[i];
        s[i]=s[l-1-i];
        s[l-1-i]=ch;
    }
    puts(s);
}