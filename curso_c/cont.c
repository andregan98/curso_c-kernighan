#include <stdio.h>
/*cuenta los caracteres de entrada*/
main()
{
	int c, nl, eb, tab;
nl = 0;
eb = 0;
tab =0;
	{
	
	while((c = getchar()) !=EOF){
		if(c == '\n' )
			++nl ;
		
		if(c == ' ')
			++eb;
		
		if(c == '\t')
			++tab; }

printf("%d\n", tab );
printf("%d\n", nl );
printf("%d\n", eb );

    }
 }
