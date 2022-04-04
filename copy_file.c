#include <stdio.h>

/* 
copiar un archivo caracter a caracter 

lee un caracter 
 while (mientras el caracter no sea el final del archivo)
	manda a salida el caracter recien leido 
	lee un carter 
	*/

main ()
{
	int c;

	c = getchar();
	while(c != EOF) {
		putchar(c);
		c = getchar();
	}
}