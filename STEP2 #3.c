#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float a,b,c;
float variables (){
printf("Donner la valeur de a :");
scanf("%f",&a);

printf("Donner la valeur de b :");
scanf("%f",&b);

printf("Donner la valeur de c :");
scanf("%f",&c);
}


float calcul (){
float delta;
delta=b*b-4*a*c;
return delta;
}
void solutions (float d){
float x1,x2,x;
if (d<0)
    printf("pas de sulution sur R");
else if (d==0){
        x=(-b)/(2*a);
    printf("la solution est \n \t \t x=%.2f",x);
    }
else {
    x1=(-b-sqrt(d))/(2*a);
    x2=(-b+sqrt(d))/(2*a);
    printf("les solutions est \n \t \t x1= %.2f ET x2= %.2f",x1,x2);
}

}



int main ()
{
    float delta;
variables();
delta=calcul();
solutions(delta);


return 0;



}
