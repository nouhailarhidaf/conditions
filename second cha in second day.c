#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caractere;
    printf("veuillez entrer une lettre\n:");
    scanf("%c",&caractere);
    switch (caractere){
    case'a':
    printf("voyelle\n:");
    break;
    case'e':
    printf("voyelle\n:");
    case'i':
    printf("voyelle\n:");
    break;
    case'o':
    printf("voyelle\n:");
    break;
    case'u':
    printf("voyelle\n:");
    break;
    case'y':
    printf("voyelle\n:");
    break;
    }
    return 0;
}
