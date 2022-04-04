#include <stdio.h>
/* imprimir una tabla de equivalencias entre fahrenheit y celsius
	la tabla va de 20 en 20 desde 0 hasta 300*/
    
    #define LOWER= 0;   /* aqui se definen estos valores para tenerlos en la fomrula */
	#define UPPER=300; 
	#define STEP=20;

main()
{

	int fahr;

	for (fahr= LOWER ; farh<= UPPER; fahr= fahr+STEP)
   /*for (fahr=0; fahr<= 300; fahr=fahr + 20) si no declaras con #define*/


		printf("%3d\t%6.1f\n",fahr, 5* (fahr-32) / 9.0 ); 

	}
}