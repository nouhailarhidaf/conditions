#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    float a,b,c,delta,x,x1,x2;
    printf("veuillez entrer les valeurs de a,b,c/n:"a,b,c);
    scanf("%f%f%f",&a,&b,&c);
    delta =pow(b,2)-(4*a*c);
    if(delta<0){
        printf("il n'y a pas de solution");
}
    else if(delta==0){
x=-b/2*a;
printf("la solution est:%.2f",x);
}
     else{
x1=(-b+sqrt(delta))/(2*a);
x2=(-b-sqrt(delta))/(2*a);
printf("il y a deux solutions %.2f %.2f",x1,x2);
}
    return 0;
}
