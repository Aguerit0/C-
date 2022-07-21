#include <stdio.h>
#include <stdlib.h>

int transformar(int tipomoneda,float precio)
{
	if(tipomoneda==1){
        precio=precio*123.39;
        }
        else if(tipomoneda==2){
            precio=precio*113.85;
        }
        else if(tipomoneda==3){
            precio=precio*24.68;
        }
        else if(tipomoneda==4){
            precio=precio*0.89;
        }
        else if(tipomoneda==5){
            precio=precio*17.51;
        }
        else if(tipomoneda==6){
            precio=precio*146.56;
        }
        else if(tipomoneda==7){
            precio=precio*30.39;
        }
        else if(tipomoneda<0 || tipomoneda>7){
         precio=0;
        }
	if(precio>10000)
	{
		precio=precio+((2/100)*precio);
	}
	precio = (int) precio;
 	return precio;
}

int main()
{
	int tipoMoneda, continuar, funcion;
	float precio;
	do
	{

		puts("1=EURO\n2=DOLAR\n3=REAL\n4=YEN\n5=YUAN\n6=LIBRA\n7=NUEVO SOL\n");
		puts("INGRESE EN 'NUMERO' EL TIPO DE MONEDA QUE DESEE: ");
		scanf("%d", &tipoMoneda);
		if(tipoMoneda<1 || tipoMoneda>7){
            puts("SE INGRESO UN NUMERO INVALIDO, VUELVA A INTENTAR");
            exit(EXIT_SUCCESS);
		}
		puts("INGRESE EL PRECIO: ");
		scanf("%f",&precio);
		if(precio<=0){
		    puts("EL PRECIO TIENE QUE SER MAYOR QUE '0', VUELVA A INTENTAR");
            exit(EXIT_SUCCESS);
		}
        funcion=transformar (tipoMoneda, precio);
		printf("EL PRECIO TRANSFORMADO A PESOS ES: %d\n",funcion);
		puts("DESDEA SEGUIR CONTINUANDO? SI=1 / NO=0");
		scanf("%d",&continuar);
		puts("\n\n")
	}
	while(continuar==1);
    return 0;
}
