
#include <stdio.h>

int main()
{
    float peso, precio;

    printf("Cual es el precio por kilo? ");
    scanf("%f", & precio);
    printf("Que cantidad compraras? (kilos) ");
    scanf("%f", &peso);


    if (peso <= 2)
        precio = precio;
    else
        if (peso > 2 && peso<=5)
        precio = precio -( precio * 0.10);
    else
           if (peso <=10)
        precio = precio -( precio * 0.15);
    else
            if (peso > 10)
        precio = precio -( precio * 0.20);

    precio = precio * peso;

    printf("Por %.2f kilos de manzana usted pagara %.2f pesos", peso, precio);

}
