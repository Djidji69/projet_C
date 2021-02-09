 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

   int main()
{
  const int MAX = 100, MIN = 1;
  int nombreMystere;
  srand(time(NULL));
  nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
  
  int nombre;
  printf("Tapez un nombre compris entre 1 et 100.\n");
  printf("Quel est le nombre ?\n");
  scanf("%d",&nombre);


  /*if (nombre == nombreMystere)
    {
      printf("vous avez touver le nombre mystere !!!\n");
    }
  	
    else*/ 
    while (nombre != nombreMystere)
    { 
      if (nombre > nombreMystere)
	
	{	
	printf("c'est moins !\n");
  	printf("Quel est le nombre ?\n");
	scanf("%d",&nombre);
	}
      
      else if (nombre < nombreMystere)
	{
	printf("c'est plus !\n");
        printf("Quel est le nombre ?\n");
        scanf("%d",&nombre);
	}
    }
  if (nombre == nombreMystere)
       {
            printf("vous avez touver le nombre mystere !!!\n");
       }

  return 0;

}
