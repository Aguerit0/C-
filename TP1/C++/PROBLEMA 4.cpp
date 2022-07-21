#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numero, divisores=0, primo=0;
    do
    {
        printf("INGRESE UN NUMERO DIFERENTE DE 0: ");
        scanf("%d",&numero);
        if(numero!=-1 && numero>0)
        {
            primo=0;
            divisores=2;
            while(divisores<numero  && primo!=1)
            {
                if(numero%divisores==0) primo=1;
                divisores++;
            }
            if (primo==0)
            {
                printf("EL NUMERO ES PRIMO \n",numero);
            }
            else
            {
                printf("EL NUMERO NO ES PRIMO \n",numero);
            }
            printf("\n");
        }
    } while(numero!=0);
    return 0;
}
