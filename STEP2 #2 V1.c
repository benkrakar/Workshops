#include <stdio.h>
#include <stdlib.h>
#include <math.h>
char c;
int x;
main()
{

    int a;
    printf("donner la valeur de a : ");
    scanf("%d",&a);
    int b;
    printf("donner la valeur de b :");
    scanf("%d",&b);
    printf("donner le type de loperation :");
    scanf(" %c",&c);

    if (c=='+'){
        x=a + b;
        printf("%d + %d =%d",a,b,x);
    }
    else if (c=='-'){
        x=a - b;
        printf("%d - %d =%d",a,b,x);
        }
    else if (c=='*'){
        x=a * b;
        printf("%d * %d = %d",a,b,x);
        }
    else if (c=='/'){
        x=a / b;
        printf("%d / %d = %d",a,b,x);
}
    if (c=='%%'){
        x=a % b;
        printf("%d %% %d = %d",a,b,x);
}
printf("\ntaille de %d en Octet est :%d \t et en Hexadecimal %X",x,sizeof(x),x);
return 0;

}
