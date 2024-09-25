#include <stdio.h>
#include <stdlib.h>

int main()
{
    int e;
    printf("veuillez entrer un entier:");
    scanf("%d",&e);
    if(e<0){
printf("%d est negatif",e);
}
    else if(e>0){
printf("%d est positif",e);
}
    else {
 printf("%d est null",e);
}
    return 0;
}
