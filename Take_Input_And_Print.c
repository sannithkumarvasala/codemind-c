#include<stdio.h>
int main()
{
    char input[100];
    scanf("%[^f]s", &input);
    printf("%s", input);
    return(0);
}