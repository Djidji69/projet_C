#include <stdio.h>

int main ()

{
  int resultat = 0, nombre1 = 0, nombre2 = 0;

  /*on demande a l'utilisateur de saisir un nombre */
  printf("Entrez le nombre 1: ");
  scanf("%d", &nombre1);
  printf("Entrez le nombre 2: ");
  scanf("%d", &nombre2); 

  //on fait le calcule

  resultat = nombre1 + nombre2;

  printf("%d + %d = %d\n",nombre1, nombre2, resultat);

  return 0; 
}
