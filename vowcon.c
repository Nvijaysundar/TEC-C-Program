#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Character :: ");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'I':
    case 'i':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("Vowel");
        break;
    default :
        printf("Consonent");
    }
}
