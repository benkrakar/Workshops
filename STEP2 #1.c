#include <stdio.h>
#include <stdlib.h>
int bool;
float a,b;
int main()
{
printf("Donner la valeur de sup");
scanf("%f",&a);
printf("Donner la valeur de inf");
scanf("%f",&b);
bool=a>b;
if (bool)
    printf("true");
else printf("False");

return 0;



}
