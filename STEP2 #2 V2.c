#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a,b,x;
char o;
int main()
{
printf("donner la valeur de a");
scanf ("%d",&a);
printf("donner la valeur de b");
scanf ("%d",&b);
printf("l'operation mathematique \n'+' pour laddition \n'-' pour la soustraction \n'*' pour la multiplication \n'/' pour la division \n'%' pour afficher le reste de la division \n >>>>>>>>>>>>>>> :");
scanf ("%s",&o);
switch(o){
    case '+' :
    x=a+b;
    printf("%d + %d =%d",a,b,x);
    break;
    case '-' :
    x=a-b;
    printf("%d - %d =%d",a,b,x);
    break;
    case '*' :
    x=a*b;
    printf("%d * %d =%d",a,b,x);
    break;
    case '/' :
    x=a/b;
    printf("%d / %d =%d",a,b,x);
    break;
    case '%':
    x=a % b;
    printf("%d %% %d =%d",a,b,x);
    break;
}
printf("\ntaille de %d en Octet est :%d \t et en Hexadecimal %X",x,sizeof(x),x);

return 0;

}
