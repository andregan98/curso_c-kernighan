#include <stdio.h>
/* imprimir una tabla de equivalencias entre fahrenheit y celsius
	la tabla va de 20 en 20 desde 0 hasta 300*/

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower= 0;
	upper=300;
	step=20;

	fahr=lower;

	printf("fahren\tcelsius\n" );

	while ( fahr <= upper ) {
		celsius = 5 * (fahr-32) / 9; 
		printf("%3.0f\t%6.2f\n", fahr,celsius );
		fahr= fahr + step;
	}
}