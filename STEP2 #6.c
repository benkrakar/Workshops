#include <stdio.h>
#include <stdlib.h>
#include <math.h>
    int a,b,q,r=0;

int i=0;
int main ()
{
   printf("Donner la valeur de a :");
scanf("%d",&a);

printf("Donner la valeur de b :");
scanf("%d",&b);



if (b%2)
    i=0;
else i=1;

if (i==1)
q=((2 * a) * (b/2));
        printf("= (2 * %d) * (%d/2) = %d",a,b,q);
if (i==0)

    while(b!=0){
    b--;
    r=r+a;
    printf("=%d * %d + %d \n ",a,b,r);
    a=a*2;
    b=b/2;
 printf("=%d * %d + %d \n ",a,b,r);
}




return 0;


 }
