#include “main.h”
#include <stdio.h>
/**
*main –prints the numbers from 1 to 100 followed by a new line
*but for multiple of three prints FIZZ instead of the number
*and for multiple of five prints BUZZ 
*Returns always 0 (success)
*/
int main(void)
{

	int i;
  
	for(i=1; i<=100; i++)
	{

		if (i % 3===0 && i % 5 !=0)
		{

			printf(“FIZZ”);
		}

		else if 
          (i % 5==0 && i % 3 !=0)
	  {

		  printf(“BUZZ”);
	  }

		else if 
       (i % 3==0 && i % 5==0)
       {

	       Pintf(“FIZZBUZZ”);

       }

		else if 
         (i==1)
	 {
 
		 printf(“%d”, i);
	 }

		else
		{

			printf(“%d”,i);
		}
	}

	printf(“\n”);

	return (0);
}
i
