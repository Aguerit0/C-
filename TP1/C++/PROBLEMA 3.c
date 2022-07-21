#include<stdio.h>
#include<stdlib.h>
int main()
{
	char nombre[] = " ";
	char apellido[] = " ";
	int edad, cantidad;
	
	for(cantidad=0; cantidad<3; cantidad++)
	{
		puts("INGRESE NOMBRE DE LA PERSONA");
		scanf("%s",nombre);
		puts("INGRESE APELLIDO DE LA PERSONA");
		scanf("%s",apellido);
		puts("INGRESE LA EDAD DE LA PERSONA");
		scanf("%d",&edad);
		if(edad>17){
			printf("%s %s ES MAYOR DE EDAD, ",nombre,apellido);	
		}
		puts("SIGUIENTE...");
		puts("\n");
		puts("\n");
	}
	puts("SE ALCANZO EL MAXIMO DE PEROSNAS");
	return 0;
}
