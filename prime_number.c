#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
        if(n==2||n==3||n==5||n==7)
    {
    printf("prime");
    }
    else if(n == 1 || n%2==0 || n%3==0 ||n%4==0 ||n%5==0 || n%7==0)
    {
        printf("not a prime");
    }
    else{
        printf("prime");
    }
    return(0);
}