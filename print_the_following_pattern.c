#include<stdio.h>
int main()
{
    int i;
    char j;
    scanf("%d",&i);
    for(i;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
              printf("%c ",i+64);  
        }
        printf("
");
    }
}