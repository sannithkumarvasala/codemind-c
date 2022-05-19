#include<stdio.h>
int main()
{
    int n,m,t;
    scanf("%d %d",&n,&m);
    for(t=1;t<=m;t=t+2)
    {
        printf("%d x %d = %d
",n,t,n*t);
    }
    return 0;
}