
#include <stdio.h>
#include <string.h>

void invertirChar(char *);


void main ()
{
    char cad[50];
    int i;

    printf("Dame la cadena: ");
    gets(cad);


    invertirChar(cad);

    puts(cad);
}

void invertirChar(char *cadena)
{
    int i;

    for(i=0; i<strlen(cadena); i++)
    {
        if(islower (cadena[i]))

            cadena[i] = toupper(cadena[i]);
        else

            cadena[i]= tolower(cadena[i]);
    }
}
