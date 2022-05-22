#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&i);
    n=i;
    for(i;i>=1;i--)
    {
        for(j=n;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("
");
    }
    return 0;
}