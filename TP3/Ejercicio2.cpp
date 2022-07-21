#include <stdio.h>
#include <stdlib.h>
 /*
 . Crear el juego de “Batalla Naval”. Permitirá jugar a dos personas enfrentadas. Ubicar 
3 barcos que utilizan una sola posición en una matriz de 5 x 5. Luego por turnos cada 
jugador elije una posición si coincide con la del barco del contrario avisar por pantalla 
que fue hundido y tiene derecho a un tiro más. El primero que acierte la posición de 
los 3 barcos enemigos gana el juego
 */


int i, j, k, opcion1, opcion2, jugador1[6][10], jugador2[6][10],respuesta;
void imprimir()
{
	for(i=1;i<=5;i++) // Imprime tablero del oponente
    {
        printf("\n\t");
        for(j=1;j<=5;j++)
        {
            if(jugador2[i][j]==3)
            { 
                printf("  #"); 
            }
            else
            {
                if(jugador2[i][j]==2) // Imprime 'X' si vale 2
                { 
                    printf("  X"); 
                }
                else
                { 
                    printf("  -"); 
                } 
            }                                     
        }
        if(i==3)
        { 
            printf("\t\t\tJUGADOR 2"); 
        }
        else
        {
            if(i==1)
            { 
                printf("\t\t\tPuntaje jugador 2: "); 
            }
        }
    }
     
    printf("\n\n\t_____________________________\n\n");
     
    for(i=1;i<=5;i++) // Imprime el tablero del jugador
    {
        printf("\n\t");
        for(j=1;j<=5;j++)
        {
            if(jugador1[i][j]==3)
            { 
                printf("  #"); 
            }
            else
            {
                if(jugador1[i][j]==2) // Imprime 'X' si vale 2 || 'O' si vale 1
                { 
                    printf("  X"); 
                }
                else
                {
                    if(jugador1[i][j]==1)
                    { 
                        printf("  O"); 
                    }
                    else
                    { 
                        printf("  -"); 
                    }
                }
            }                                     
        }
        if(i==3)
        { 
            printf("\t\t\tJUGADOR 1"); 
        }
        else
        {
            if(i==1)
            { 
                printf("\t\t\tPuntaje jugador 1: "); 
            }
        }
    }
  
    printf("\n\n");   	
}

void iniciarJuego()
{
	for(i=1; i<=5;i++)
	{
		for(j=1; j<=5; j++)
		{
			jugador1[i][j]=0;
			jugador2[i][j]=0;
		}	
	}
	printf("\t\t\tJUGADOR 1: ");
	printf("\n\nIGRESAR UN BARCO: ");
	for(k=1; k<=5;k++)
	{
		imprimir();
		
		printf("\n\tFILA: ",k);
		scanf("%d",&opcion1);
		while(opcion1<1 || opcion1>5)
		{
			printf("FILA INCORRECTA, INGRESE VALOR ENTRE 1 Y 5");
			scanf("%d",&opcion1);
		}
		
		
		printf("\n\tCOLUMNA: ",k);
		scanf("%d",&opcion2);
		while(opcion2<1 || opcion2>5)
		{
			printf("COLUMNA INCORRECTA, INGRESE VALOR ENTRE 1 Y 5");
			scanf("%d",&opcion2);
		}
		
		if(jugador1[opcion1][opcion2]==1)
		{
			printf("\nYA EXISTE UN BARCO EN ESA POSICION");
			k=k-1;
		}
		jugador1[opcion1][opcion2]=1;
		system("cls");
	}
}
int main() 
	{


		
	printf("\n\\t\t BATALLA NAVAL");
	printf("\n\n\n\t 1-JUGAR\n\n\t0-SALIR\n\n\n\t");
	scanf("%d",&respuesta);
	while(respuesta>1 || respuesta<0)
	{
		printf("VALOR INGRESADO INCORRECTO, VUELVA A INTENTAR...");
		scanf("%d",&respuesta);	
	}
	system("cls");
	
    if(respuesta==1)
	{
    	iniciarJuego();
		printf("\n\n\n\t\t JUEGO INICIADO\n\n");
		do
		{
			system("cls");
			imprimir();	
			
			
			printf("\n\tFILA: ",k);
			scanf("%d",&opcion1);
			while(opcion1<1 || opcion1>5)
			{
				printf("FILA INCORRECTA, INGRESE VALOR ENTRE 1 Y 5");
				scanf("%d",&opcion1);
			}
		
		
			printf("\n\tCOLUMNA: ",k);
			scanf("%d",&opcion2);
			while(opcion2<1 || opcion2>5)
			{
				printf("COLUMNA INCORRECTA, INGRESE VALOR ENTRE 1 Y 5");
				scanf("%d",&opcion2);
			}
		}	
	}
    
    return 0;
}
