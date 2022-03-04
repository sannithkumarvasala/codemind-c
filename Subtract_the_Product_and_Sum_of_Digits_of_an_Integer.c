#include<stdio.h>
int main(){
int n,r,sum=0,pro=1,sub;
scanf("%d", &n);
while (n>0)
{
    r = n%10;
    sum = sum+r;
    pro = pro*r;
    n = n/10;
}
sub = pro-sum;
printf("%d", sub);
return(0);
}