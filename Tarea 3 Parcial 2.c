
#include<stdio.h>
#define N 10

int busBinCiclos(int valor, int arr[N], int, int ,int );
int busBinRecur(int valor, int arr[N], int, int, int);

int main()
{
    int arreglo[N] = {4,20,38,45,67,88,110,137,149,182};
    int inicio=0, final = N-1, media, flag, valor, flag2;

    media= inicio + (final-inicio)/2;


    printf("Dame el valor que deseas encontrar: ");
    scanf("%d", &valor);

    flag = busBinCiclos(valor, arreglo, inicio, final, media);
    flag2 = busBinRecur(valor, arreglo, inicio, final, media);


     if(flag == 1 && flag2 == 1)

        printf("El valor %d si se encuentra en el arreglo", valor);
    else
        printf("El valor %d no se encuentra en el arreglo", valor);


}



int busBinCiclos(int valor, int arr[N], int ini,int fin,int med)
{
    int i;

    if(valor == arr[med])
    {
          return 1;
    }else if (valor < arr[med])
    {
        for(i=ini; i<med; i++)
        {
             if(valor == arr[i])

                return 1;
        }

    }else if (valor > arr[med])

    {
        for(i=med; i<N; i++)
        {
            if(valor == arr[i])

                return 1;

        }

    }
    return-1;
}

int busBinRecur(int valor, int arr[N], int ini, int fin, int med)
{
    while (med >= ini && med <= fin)
    {

    if(valor == arr[med])
    {
        return 1;

    }else if(valor < arr[med])
    {
        return busBinRecur(valor,arr,ini,fin,med-1);

    }else if (valor > arr[med])
    {
         return busBinRecur(valor,arr,ini,fin, med+1);
    }

    }

     return -1;

}


