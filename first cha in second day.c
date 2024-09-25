#include <stdio.h>

int main()
{
   int nbr;

   printf("Veuillez entrer un entier:\n");
   scanf("%d", &nbr);

   if (nbr % 2 == 0)
      printf("Paire\n");
   else
      printf("Impaire\n");

   return 0;
