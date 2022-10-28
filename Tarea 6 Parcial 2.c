#include <stdio.h>
#define N 10



int main()
{
    int arreglo[N] = {25,3,12,434,5,23,7,34,20,65};

    impArr(arreglo);
    printf("\n ");
    selDire(arreglo);
    impArr(arreglo);

}

int selDire(int arr[N])
{
    int i, j, aux;

    for(i=0; i<N-1; i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(arr[i] > arr[j])
            {
                aux= arr[i];
                arr[i]= arr[j];
                arr[j]=aux;
            }
        }

    }
}

void impArr(int arr[N])
{
    int i;

    for(i=0; i<N; i++)
    {
        printf("%d ", arr[i]);
    }
}
