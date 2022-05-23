#include<stdio.h>
int main()
{
    char i,j;
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c ",i+64);
        }
        printf("
");
    }
}