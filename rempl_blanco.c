gcc -ansi #include <stdio.h>


main()
{

	int caracter_actual, ultimo_caracter_impreso;

	
	while((caracter_actual= getchar()) != EOF ){
		if(caracter_actual != ' ' || ultimo_caracter_impreso !=caracter_actual){
				putchar(caracter_actual);
		}
		ultimo_caracter_impreso = caracter_actual;

}

	


}	
