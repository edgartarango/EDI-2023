
#include <stdio.h>
#include <stdlib.h>



typedef struct
{
    int cod;
    int nInt;
    int rep;
    char nom[30];
    char alb[30];
    char nomIn1[30];
    char nomIn2[30];
    char nomIn3[30];
}CAN;


int  capturaDatos(CAN *can);
int capturaArr(CAN *can, int );
int canMasRep(CAN *can, int);

int main()
{
    int numero, pos;

    printf("¿Cuantas canciones vas a ingresar?: ");
    scanf("%d", &numero);

    CAN cancion[numero];

    capturaArr(cancion, numero);
    pos = canMasRep(cancion, numero);

    printf("La cancion con mas reproducciones es la numero %d\n", pos+1);
    printf("Codigo: %d\n", cancion[pos].cod);
    puts(cancion[pos].nom);
    puts(cancion[pos].alb);
    printf("No. de Interpretes: %d\n", cancion[pos].nInt);

     switch(cancion[pos].nInt)
    {
        case 1:
            puts(cancion[pos].nomIn1);
        break;
        case 2:
            puts(cancion[pos].nomIn1);
            puts(cancion[pos].nomIn2);
        break;
        case 3:
            puts(cancion[pos].nomIn1);
            puts(cancion[pos].nomIn2);
            puts(cancion[pos].nomIn3);
        break;
    }




    printf("No. de Reproducciones: %d\n", cancion[pos].rep);


}

int canMasRep(CAN *can, int num)
{
    int i, aux=0, r;

    for(i=0; i<num; i++)
    {
        if(can[i].rep > aux)
        {
            aux = can[i].rep;
            r = i;
        }
    }
    return r;
}

int capturaArr(CAN *can, int num)
{
    int i;

    for(i=0; i<num; i++)
    {
        capturaDatos(&can[i]);
    }
}


int capturaDatos(CAN *can)
{

    printf("Dame el codigo de la cancion: ");
    scanf("%d", &can->cod);
    fflush(stdin);
    printf("Dame el nombre de la cancion: ");
    scanf("\n%[^\n]",can->nom);
    printf("Dame el nombre del album: ");
    scanf("\n%[^\n]",can->alb);
    printf("Dame el numero de interpretes (max 3): ");
    scanf("%d", &can->nInt);
    fflush(stdin);

    while(can->nInt > 3 || can->nInt < 0)
    {
        printf("Opcion invalida, vuelva a intentar (max 3): ");
        scanf("%d ", &can->nInt);
    }

    switch(can->nInt)
    {
        case 1:
            printf("Dame el nombre del interprete: ");
            scanf("\n%[^\n]",can->nomIn1);;
        break;
        case 2:
            printf("Dame el nombre del interprete 1: ");
            scanf("\n%[^\n]",can->nomIn1);
            printf("Dame el nombre del interprete 2: ");
            scanf("\n%[^\n]",can->nomIn2);
        break;
        case 3:
            printf("Dame el nombre del interprete 1: ");
            scanf("\n%[^\n]",can->nomIn1);
            printf("Dame el nombre del interprete 2: ");
            scanf("\n%[^\n]",can->nomIn2);
            printf("Dame el nombre del interprete 3: ");
            scanf("\n%[^\n]",can->nomIn3);
        break;

    }
    printf("Dame el numero de reproducciones: ");
    scanf("%d", &can->rep);
    fflush(stdin);
}


