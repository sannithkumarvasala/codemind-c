#include<stdio.h>
int main()
{
    int num,n=1,sum=0;
    scanf("%d", &num);
    while(n<=num)
    {
        sum+=n; // sum= sum+n;
        n++; // n = n+1;
    }
    printf("%d", sum);
    return 0;
}
