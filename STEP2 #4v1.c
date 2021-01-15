#include <stdio.h>
#include <stdlib.h>


int main ()
{
int a,b,x,y;


a=21;
b=15;
x=a/b;
y=a%b;
printf("%d = %d * %d + %d \n ",a,b,x,y);
a=b;
b=y;
x=a/b;
y=a%b;
printf("%d = %d * %d + %d  \n",a,b,x,y);
a=b;
b=y;
x=a/b;
y=a%b;
printf("%d = %d * %d + %d  \n",a,b,x,y);

return 0;



}
