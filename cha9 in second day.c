#include <stdio.h>

#include <stdlib.h>

int main(){

    char caractere;

    printf("veuillez enter your caractere : ");

    scanf("%c",&caractere);


    if ((caractere >= 'A' && caractere <= 'Z')) {
        printf("Le caract�re est une majuscule.\n");
    } else if (caractere >= 'a' && caractere <= 'z') {
        printf("Le caract�re est une minuscule.\n");
    } else {
        printf("Le caract�re n'est pas un alphabet.\n");
    }


    return 0;
}
