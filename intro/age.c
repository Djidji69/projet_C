 #include <stdio.h>
 #include <stdlib.h>

int main(int argc, char *argv[])
{
  /*int age = 0;
	printf("vous avez quel âge?\n");
	scanf("%d", &age);

        if (age >= 18)

	  {
	    printf ("vous etes majeur !\n");
	  }

		else if (age >= 10 && age < 18) 

		  {
		    printf("vous etes ados !\n");
		  }
	    
			else if (age >= 6 && age < 10)
			  
			  {
			    printf("vous etes au primaire !\n");	  
			  }
			else 
		  printf("vous etes un bébé !\n");
  */
  int menu ;
  
  
  printf("=======Menu=======\n");
  printf("1.Royal Cheese\n");
  printf("2. Mc Deluxe\n");
  printf("3. Mc Bacon\n");
  printf("4.Big Mac\n");

  printf("choisissez le menu entre de 1 à 4 \n");
  scanf("%d", &menu);

  switch (menu)
    {
    case 1:
      printf("1.Royal Cheese\n");
      break;

    case 2:
      printf("2. Mc Deluxe\n");
      break;
    case 3:
      printf("3. Mc Bacon\n");
      break;
    case 4:
      printf("4.Big Mac\n");
      break;
    default:
	printf("votre choix ?\n");
      break;
}
return 0;
}


