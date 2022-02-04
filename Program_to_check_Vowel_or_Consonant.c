#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    switch(c)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
         printf("Vowel");
        break;
    
    default:
    
    printf("Consonant");
    break;
    }
    
    return 0;
}