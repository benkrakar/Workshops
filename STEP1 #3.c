#include <stdio.h>
#include <stdlib.h>

PI=3.14;

float D,P,S,r;
main(){
printf("Donner la valeur du rayon r:");
scanf("%f",&r);
D=2*r,
P=2*PI*r;
S=PI*r*r;
printf("Un cercle de rayon r %.2f a pour diametre D %.2f , pour perimetre P %.2f et pour surface S%.2f",r,D,P,S);
return 0;

}
