 /* Dado n números enteros, determinar para cada uno de ellos si
son números positivos o negativos retornando “Positivo” y
“Negativo” respectivamente. (La función deberá retornar las
respectivas cadenas de caracteres según sea el caso) */

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

char positivo_o_negativo(int number)
{
	char str1='POSITIVO', str2='NEGATIVO';
	if (number>=0){
		return str1;
	}
	else{
	    return str2;
	}
}

int main()
{
	int n, i, number;
    char resultado;

	printf("Bienvenido.");
	printf("\nEscriba el numero de veces que desee repetir la entrada de numeros: ");
	scanf("%d",&n);
	// Procede a repetir la entrada y resultado de números.
	for (i=0; i<=n-1; i++){
		printf("\n\nPara el caso: %i",i+1);
		printf("\nEscriba un numero entero, para determinar si es positivo o negativo: ");
		scanf("%d",&number);
		printf("El numero ingresado es: ");
		resultado = positivo_o_negativo(number);
	    printf("%c",resultado);
	}
}
