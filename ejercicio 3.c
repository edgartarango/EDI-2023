
#include <stdio.h>


 int main()
 {
     float lado1, lado2, lado3;

     printf("Dame el tamaño de un lado del triangulo: ");
     scanf("%f", &lado1);
     printf("Dame el tamaño de otro lado del triangulo: ");
     scanf("%f", &lado2);
     printf("Dame el tamaño del ultimo lado del triangulo: ");
     scanf("%f", &lado3);

     if (lado1 == lado2 && lado1 == lado3)

        printf("Es un triangulo equilatero.");

     else

        if(lado1 == lado2 || lado1 == lado3)

            printf("Es un triangulo isoceles.");
        else

            printf("Es un triangulo escaleno.");


 }

