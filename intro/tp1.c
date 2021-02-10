 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

   int main()
{
  const int MAX = 100, MIN = 1;
  int nombreMystere, nombre;
  srand(time(NULL));
  nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
  
  while (nombre != nombreMystere)
 /*on peut utiliser d ela même manier la boucle do {....} while(nombre != nombreMystere)*/
     { 
      
       printf("Quel est le nombre ?\n");
       scanf("%d",&nombre);
      
      if (nombre > nombreMystere)
	
	{	
	printf("c'est moins !\n");
  	}
      
      else if (nombre < nombreMystere)
	{
        printf("c'est plus !\n");
	}
  
      else 
	{
            printf("vous avez touver le nombre mystere !!!\n");
	}
      }
     
  return 0;

}
