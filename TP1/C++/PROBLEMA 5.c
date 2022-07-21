// PROBLEMA_5
/* Realice un programa para obtener el resultado del escrutinio en las elecciones de
   delegados del centro de estudiantes, considerar que hay 160 electores y se han
   presentado 3 candidatos, todos votaron, el algoritmo debe declarar al ganador
   por mayoría simple */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int votos[160], i, contador1=0, contador2=0, contador3=0, contador4=0;


    printf("Bienvenido\n");
    // Procede a cargar el arreglo de los 160 votos de los candidatos correspondientes por los usuarios.
    for (i=0; i<=159; i++)//Bucle FOR
    {
        printf("\nVOTANTE Numero: %i",i+1);
        printf("\nEstablezca su voto segun los siguientes 3 candidatos postulados: 1, 2 o 3: ");
        scanf("%d",&votos[i]);
    }
    // Procedemos a calcular por contadores la cantidad de votos de cada candidato
    for (i=0; i<=159; i++) //Bucle FOR
    {
        switch (votos[i]) // Contabilizamos los votos a través de un switch.
        {
            case 1:
                contador1 = contador1+1;
                break;
            case 2:
                contador2 = contador2+1;
                break;
            case 3:
                contador3 = contador3+1;
                break;
            default:
                contador4 = contador4+1;
        }
    }
    // Mostramos a pantalla el resultado de quién ganó las elecciones con mayoría de votos.
    if (contador1>contador2 && contador1>contador3)
        {
        printf("\n¡¡¡GANO LAS ELECCIONES EL CANDIDATO 1!!! CON UNA CANTIDAD DE VOTOS DE: ");
        printf("%d",contador1);
        }
    if (contador2>contador1 && contador2>contador3)
        {
        printf("\n¡¡¡GANO LAS ELECCIONES EL CANDIDATO 2!!! CON UNA CANTIDAD DE VOTOS DE: ");
        printf("%d",contador2);
        }
    if (contador3>contador1 && contador3>contador2)
        {
        printf("\n¡¡¡GANO LAS ELECCIONES EL CANDIDATO 3!!! CON UNA CANTIDAD DE VOTOS DE: ");
        printf("%d",contador3);
        }
    printf("\nHUBIERON UNA CANTIDAD DE VOTOS NULOS/EN BLANCO DE: ");
    printf("%d",contador4);
    printf("\n\n");
    system("PAUSE");
}
