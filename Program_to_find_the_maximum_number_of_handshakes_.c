#include<stdio.h>
int main()
{
    int num, handshakes;
    scanf("%d", &num);
    handshakes = num*(num-1)/2;
    printf("%d", handshakes);
    return(0);
}