
#include <stdio.h>

int main()
{
    int hora, min;

    printf("Dime que hora es comenzando por la hora y despues minutos\nHORA? ");
    scanf("%d", &hora);
    printf("MINUTOS? ");
    scanf("%d", &min);

    if (hora <= 11 && min <=59)
        printf("Buenos dias");
    else
        if(hora <=17 && min <=59)
        printf("Buenas tardes");
    else
        if(hora <=23 && min <=59)
         printf("Buenas noches");
    else
        printf("Hora invalida");
}
