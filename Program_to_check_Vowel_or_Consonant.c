#include <stdio.h>
int main()
{
    char A;
    scanf("%c", &A);
    if(A == 'a' || A == 'e' || A == 'i' || A == 'o' || A == 'u' || 	A == 'A' || A == 'E' || A == 'I' || A == 'O' || A == 'U')  {
		printf("Vowel");
	}
    else {
    	printf("Consonant");
	}
    return 0;
}