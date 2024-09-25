#include <stdio.h>
#include <math.h>


int main()
{
    char letter;

    printf("veuillez entrer une lettre\n");
    scanf("%c", &letter);

    if (letter >= 65 && letter <= 90)
    {
        printf("Majuscule\n");
    }
    else
    {
        printf("Miniscule ou pas une lettre\n");
    }
    return (0);
}
