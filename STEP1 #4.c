#include <stdio.h>
#include <stdlib.h>
int A,nbr,add;
float moy;
main(){
nbr=0;
add=0;
printf("Entrez un entier positif:");
scanf("%d",&A);
while(A>0){
        nbr=nbr+1;
    add = add+A;
    printf("Entrez un entier positif:");
    scanf("%d",&A);

}
if(A=-1){
moy=add/nbr;
printf("La moyenne de ces %d entiers vaut %.2f",nbr,moy);
}
return 0;

}
