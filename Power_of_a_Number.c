#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z,power;
    scanf("%d %d %d", &x,&y,&z);
    power=pow(x,y);
    printf("%d",power%z);
    return 0;
    
}