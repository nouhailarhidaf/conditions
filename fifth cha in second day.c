#include <stdio.h>
#include <stdlib.h>

int main()
{
    int annee,m,j,h,M,s,A;
    printf("veuillez entrer le nbr des annees:");
    scanf("%d",&annee);
    A=annee*365;
    m=A/30;
    j=A;
    h=j*24;
    M=h*60;
    s=M*60;
    printf("%dmois %djours %dheures %dminutes %dsecondes",m,j,h,M,s);

    return 0;
}
