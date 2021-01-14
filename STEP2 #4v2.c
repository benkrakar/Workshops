#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
int a,b,x,y;
printf("donner la valeur de a");
scanf("%d",&a);
printf("donner la valeur de b");
scanf("%d",&b);
while(b!=0)
{
x=a/b;
y=a%b;
a=b;
b=y;
x=a/b;
y=a%b;
printf("%d = %d * %d + %d  \n",a,b,x,y);
}
return 0;



}
