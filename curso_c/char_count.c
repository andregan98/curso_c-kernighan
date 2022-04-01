#include <stdio.h>
/* cuenta los caracteres de entrada
 nc es igual a  NUMERO DE CARACTERES*/


main()
{

	long nc;

	nc=0;
	while( getchar() != EOF )
		nc++;
	/* for (nc=0; getchar() != EOF; ++nc)*/
	printf("%ld\n", nc);
}	
