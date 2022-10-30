
#include<stdio.h>
#define N 10


int busBinRecur(int valor, int arr[N], int, int, int);
int impArr(int arr[N]);

int main()
{
    int arreglo[N] = {4,20,38,45,67,88,110,137,149,182};
    int inicio=0, final = N-1, media, valor, flag2;

    media= inicio + (final-inicio)/2;


    printf("Dame el valor que deseas insertar: ");
    scanf("%d", &valor);

    impArr(arreglo);

    flag2 = busBinRecur(valor, arreglo, inicio, final, media);

    printf("El valor %d debe insertarse en la posicion %d del arreglo.", valor, flag2);


}


int busBinRecur(int valor, int arr[N], int ini, int fin, int med)
{
    int pos;

    while (med >= ini && med <= fin)
    {

    if(valor == arr[med]  )
    {
        pos= med;

        return pos;

    }else if(valor > arr[med-1] && valor < arr[med+1] )
    {
        pos= med;

        return pos;

    }else if(valor < arr[med])
    {
        return busBinRecur(valor,arr,ini,fin,med-1);

    }else if (valor > arr[med])
    {
         return busBinRecur(valor,arr,ini,fin, med+1);
    }

    }
}

int impArr(int arr[N])
{
    int i;

    for(i=0; i<N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


