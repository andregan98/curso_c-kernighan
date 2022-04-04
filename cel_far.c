#include <stdio.h>
/* imprimir una tabla de equivalencias entre fahrenheit y celsius
	la tabla va de 20 en 20 desde 0 hasta 300*/

main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower= 0;
	upper=300;
	step=20;

	celsius=lower;

	printf("celsius\tfarhe\n" );

	while ( celsius <= upper ) {

		fahr = (celsius / 5 * 9  ) + 32;

		printf("%d\t%d\n", celsius,fahr );

		celsius= celsius + step;

	}
}