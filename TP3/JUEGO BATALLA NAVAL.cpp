#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
 /*
 . Crear el juego de “Batalla Naval”. Permitirá jugar a dos personas enfrentadas. Ubicar 
3 barcos que utilizan una sola posición en una matriz de 5 x 5. Luego por turnos cada 
jugador elije una posición si coincide con la del barco del contrario avisar por pantalla 
que fue hundido y tiene derecho a un tiro más. El primero que acierte la posición de 
los 3 barcos enemigos gana el juego
 */
 int fila, columna,fila2, columna2, barcoJugador1[5][5], barcoJugador2[5][5],respuesta,tiroAcertadoJugador1=0, tiroAcertadoJugador2=0;		
 int disparar1[5][5], disparar2[5][5], dispararFila1, dispararFila2, dispararColumna1, dispararColumna2;
 


void ingresarBarcosJugador1()
{
	
	//			INICIAR
	for(int i=0; i<5;i++)
	{
		for(int j=0; j<5; j++)
		{
			barcoJugador1[i][j]=0;
		}
	}
//				JUGADOR 1
system("cls");
for(int c=0; c<3; c++)
{
	printf("\t\t\tJUGADOR 1");
	printf("\n\n\nINGRESE LA POSICION DEL BARCO %d",c+1);
	printf("\nFILA: ");
	scanf("%d", &fila);
	while(fila>5 || fila<1)
	{
		printf("\nFILA INGRESADA INCORRECTA, INGRESE VALOR ENTRE 1 Y 5");
		printf("\nFILA: ");
		scanf("%d", &fila);	
	}
	printf("\nCOLUMNA: ");
	scanf("%d", &columna);
	while(columna>5 || columna<1)
	{
		printf("\nCOLUMNA INGRESADA INCORRECTA, INGRESE VALOR ENTRE 1 Y 5");
		printf("\nCOLUMNA: ");
		scanf("%d", &columna);	
	}
	
	if(barcoJugador1[fila][columna]==1)
	{
		printf("\nYA EXISTE UN BARCO EN ESAS COORDENADAS, VUELVA A INTENTAR... ");
		getche();
		c=c-1;
		
		
	}
	barcoJugador1[fila][columna]=1;
	system("cls");
}
}


void IngresarBarcosJugador2()
{
	//			INICIAR
	for(int i=0; i<5;i++)
	{
		for(int j=0; j<5; j++)
		{
			barcoJugador2[i][j]=0;
		}
	}
//				JUGADOR 2
system("cls");
for(int c=0; c<3; c++)
{
	printf("\t\t\tJUGADOR 2");
	printf("\n\n\nINGRESE LA POSICION DEL BARCO %d",c+1);
	printf("\nFILA: ");
	scanf("%d", &fila2);
	while(fila2>5 || fila2<1)
	{
		printf("\nFILA INGRESADA INCORRECTA, INGRESE VALOR ENTRE 1 Y 5");
		printf("\nFILA: ");
		scanf("%d", &fila2);	
	}
	printf("\nCOLUMNA: ");
	scanf("%d", &columna2);
	while(columna2>5 || columna2<1)
	{
		printf("COLUMNA INGRESADA INCORRECTA, INGRESE VALOR ENTRE 1 Y 5");
		printf("\nCOLUMNA: ");
		scanf("%d", &columna2);	
	}
	if(barcoJugador2[fila2][columna2]==1)
	{
		printf("\nYA EXISTE UN BARCO EN ESAS COORDENADAS, VUELVA A INTENTAR... ");
		getche();
		c=c-1;
	}
	barcoJugador2[fila2][columna2]=1;
	system("cls");
}	
}




void dispararJugador1()
{
	//			DISPARA JUGADOR 1
	int coincide=0;
	for(int i=0; i<5;i++)
	{
		for(int j=0; j<5; j++)
		{
			disparar1[i][j]=0;
		}
	}
		do
		{
			system("cls");
			printf("\n\t\t\tJUGADOR 1");
			printf("\n\t\tTU TURNO DE DISPARAR!!!");
			printf("\n\n\nINGRESE EN QUE POSICION QUIERE DISPARAR ");
			printf("\nFILA: ");
			scanf("%d", &dispararFila1);
			while(dispararFila1>5 || dispararFila1<1)
			{
				printf("\nFILA INGRESADA INCORRECTA, INGRESE VALOR ENTRE 1 Y 5");
				printf("\nFILA: ");
				scanf("%d", &dispararFila1);	
			}
			printf("\nCOLUMNA: ");
			scanf("%d", &dispararColumna1);
			while(dispararColumna1>5 || dispararColumna1<1)
			{
				printf("\nCOLUMNA INGRESADA INCORRECTA, INGRESE VALOR ENTRE 1 Y 5");
				printf("\nCOLUMNA: ");
				scanf("%d", &dispararColumna1);	
			}	
			
			disparar1[dispararFila1][dispararColumna1]=2;
			if(barcoJugador2[dispararFila1][dispararColumna1]==1 && tiroAcertadoJugador1<3)
			{
				printf("\n\n\t\t!!!  ACERTASTE UN TIRO   !!!");
				if(tiroAcertadoJugador1<2)
				{
					printf("\n\n\t\t!!!  PUEDES DISPARAR DE NUEVO   !!!");	
				}
				sleep(3);
				coincide=1;
				tiroAcertadoJugador1++;
				barcoJugador2[dispararFila1][dispararColumna1]=0;
			}
			else
			{
				printf("\n\n\t\tERRASTE TU TIRO");
				printf("\n\n\t\tES EL TURNO DE TU OPONENTE");
				sleep(3);
				coincide=0;
			}
		if(tiroAcertadoJugador1==3)
		{
			printf("\n\n\t\t!!! GANASTE EL JUEGO  !!!");
			printf("\nEL JUEGO SE CERRARA AUTOMATICAMENTE EN 3 SEGUNDOS...");
			sleep(3);
			exit(-1);
		}	
		}
		while(coincide==1 && tiroAcertadoJugador1<3);		
}

void dispararJugador2()
{
	//			DISPARA JUGADOR 1
	int coincide=0;
	for(int i=0; i<5;i++)
	{
		for(int j=0; j<5; j++)
		{
			disparar2[i][j]=0;
		}
	}
		do
		{
			system("cls");
			printf("\n\t\t\tJUGADOR 2");
			printf("\n\t\tTU TURNO DE DISPARAR!!!");
			printf("\n\n\nINGRESE EN QUE POSICION QUIERE DISPARAR ");
			printf("\nFILA: ");
			scanf("%d", &dispararFila2);
			while(dispararFila2>5 || dispararFila2<1)
			{
				printf("\nFILA INGRESADA INCORRECTA, INGRESE VALOR ENTRE 1 Y 5");
				printf("\nFILA: ");
				scanf("%d", &dispararFila2);
			}
			printf("\nCOLUMNA: ");
			scanf("%d", &dispararColumna2);
			while(dispararColumna2>5 || dispararColumna2<1)
			{
				printf("\nCOLUMNA INGRESADA INCORRECTA, INGRESE VALOR ENTRE 1 Y 5");
				printf("\nCOLUMNA: ");
				scanf("%d", &dispararColumna2);
			}	
			
			disparar1[dispararFila2][dispararColumna2]=2;
			if(barcoJugador1[dispararFila2][dispararColumna2]==1 && tiroAcertadoJugador2<3)
			{
				printf("\n\n\t\t!!!  ACERTASTE UN TIRO   !!!");
				if(tiroAcertadoJugador2<2)
				{
					printf("\n\n\t\t!!!  PUEDES DISPARAR DE NUEVO   !!!");	
				}
				
				sleep(3);
				coincide=1;
				tiroAcertadoJugador2++;
				barcoJugador1[dispararFila2][dispararColumna2]=0;
			}
			else
			{
				printf("\n\n\t\tERRASTE TU TIRO");
				printf("\n\n\t\tES EL TURNO DE TU OPONENTE");
				sleep(3);
				coincide=0;
			}
		if(tiroAcertadoJugador2==3)
		{
			printf("\n\n\t\t!!! GANASTE EL JUEGO  !!!");
			printf("\nEL JUEGO SE CERRARA AUTOMATICAMENTE EN 3 SEGUNDOS...");
			sleep(3);
			exit(-1);
		}	
		}
		while(coincide==1 && tiroAcertadoJugador2<3);		
}





 	


/*void imprimir()
{
	InicioJugador();
	//			IMPRIMIR JUGADOR 1
	for(i=0;i<5;i++)
	{
		for(k=0;k<5;k++)
		{
			if(barcoJugador1[i][k]==)
			printf("")	
		}	
	}
	//			IMPRIMIR JUGADOR 2
}
*/



int main()
{
	printf("\n\n\t    ~BATALLA NAVAL~\n\n\t\t#\n\t\t#|\n\t\t#|#\n\t\t#|##\n\t\t#|###\n\t\t#|####");
    printf("\n\t\t#|#####\n\t\t#|######\n\t#########################\n\t -----------------------");
    printf("\n\t  #####################\n\t   ###################\n\t    #################\n\t     ###############");
	printf("\n\n\n\t1-JUGAR\n\n\t0-SALIR\n\n\n\t");
	printf("\nRespuesta: ");
	scanf("%d",&respuesta);
	while(respuesta>1 || respuesta<0)
	{
		printf("\nVALOR INGRESADO INCORRECTO, VUELVA A INTENTAR...");
		printf("\nRespuesta: ");
		scanf("%d",&respuesta);		
	}
	system("cls");

	if(respuesta==1)
	{
		ingresarBarcosJugador1();
		IngresarBarcosJugador2();
		while(tiroAcertadoJugador1<3 && tiroAcertadoJugador2<3)
		{
			dispararJugador1();
			dispararJugador2();	
		}	
	}
	else
	{
		exit(-1);
	}


}
