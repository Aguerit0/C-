/* El precio de una pizza depende de su tama�o seg�n la siguiente tabla:
   Cada ingrediente adicional cuesta $100.
   Escriba un programa que lea el tama�o de la pizza y el n�mero de ingredientes
   adicionales y muestre el precio que debe pagar y la forma de pago.
   Si la cuenta es menor a $700 pago en efectivo. Sin�, si es de $700 hasta $1000
   pagara con el celular (dinero electr�nico). Pero si es mayor a 1000 hasta $1500,
   usara la tarjeta de d�bito. Caso contrario, pagara con la tarjeta de cr�dito */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Tamanho[3]={1,2,3}, Precio[3]={500,800,1200},Pizza, Precio_Total, Ingrediente_Adicional=100, Numero_Ingredientes, i;
    char Continuar;

    printf("Bienvenido");
    do
    {
        // ORDEN DE TAMA�O DE PIZZA, CANTIDAD DE INGREDIENTES POR EL USUARIO
        do
        {
            printf("\n\nQue tamanho de pizza desea ordenar? 1/2/3: ");
            scanf("%d",&Pizza);
        } while(Pizza>3);
        printf("Desea agregar ingredientes? Cuantos?: ");
        scanf("%d",&Numero_Ingredientes);


        // CALCULO DEL PRECIO TOTAL
        for (i=0; i<3; i++)
        {
            if (Tamanho[i]==Pizza){
                Precio_Total = (Precio[i] + Ingrediente_Adicional*Numero_Ingredientes);}
        }


        // DETERMINANTE DEL M�TODO DE PAGO SEG�N PRECIO TOTAL
        if (Precio_Total<700){
            printf("\nEl precio total es: $");
            printf("%d",Precio_Total);
            printf("\nEl pago se realizara de contado.");}
        if (Precio_Total>=700 && Precio_Total<=1000){
            printf("\nEl precio total es: $");
            printf("%d",Precio_Total);
            printf("\nEl pago se realizara con el celular (dinero electronico).");}
        if (Precio_Total>1000 && Precio_Total<=1500){
            printf("\nEl precio total es: $");
            printf("%d",Precio_Total);
            printf("\nEl pago se realizara con con la tarjeta de debito.");}
        if (Precio_Total>1500){
            printf("\nEl precio total es: $");
            printf("%d",Precio_Total);
            printf("\nEl pago se realizara con con la tarjeta de credito.");}


        // CONTINUAR CON LA ORDEN DE OTRA PIZZA O NO.
        printf("\n\nDesea ordenar otra Pizza? S/N \n");
        fflush(stdin);
        scanf("%c",&Continuar);
    } while(Continuar!='N'&& Continuar!='n');
    system("PAUSE");
}
