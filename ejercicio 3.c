
#include <stdio.h>


 int main()
 {
     float lado1, lado2, lado3;

     printf("Dame el tama�o de un lado del triangulo: ");
     scanf("%f", &lado1);
     printf("Dame el tama�o de otro lado del triangulo: ");
     scanf("%f", &lado2);
     printf("Dame el tama�o del ultimo lado del triangulo: ");
     scanf("%f", &lado3);

     if (lado1 == lado2 && lado1 == lado3)

        printf("Es un triangulo equilatero.");

     else

        if(lado1 == lado2 || lado1 == lado3)

            printf("Es un triangulo isoceles.");
        else

            printf("Es un triangulo escaleno.");


 }

