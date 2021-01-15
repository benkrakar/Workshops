#include <stdio.h>
#include <stdlib.h>

main()
{

printf (" Bonjour ,  Veuillez remplir les informations suivante : \n   ");
char Nom[20];
printf("Nom ");
scanf("%s",&Nom);

char Prenom[20];
printf("Prenom :  ");
scanf("%s",&Prenom);

int Age;
printf("Age :  ");
scanf("%d",&Age);

char Sex[2];
printf("Sex'H/F' :  ");
scanf("%s",&Sex);

char Numero[20];
printf("Numero de Telephone  :  ");
scanf("%s",&Numero);

printf ("************************************* Votre informations *********************************** \n Nom: %s \n Prenom: %s \n Age: %d \n Sex: %s \n Numero de Telephone: %s \n*********************************************** MERCI ****************************************" ,Nom,Prenom,Age,Sex,Numero);

return 0;



}
