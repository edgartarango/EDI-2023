

#include <stdio.h>
#define N 10

void impArr(int arr[N]);
void impArr2(int arr2[N]);
int bubbleSort(int arr[N]);
int bubbleSortOptimizado(int arr2[N]);

int main()
{
    int arreglo[N]= {24,15,2,66,47,86,45,35,346,423};
    int arreglo2[N]= {24,15,2,66,47,86,45,35,346,423};

    impArr(arreglo);
    bubbleSort(arreglo);
    printf("\n");
    impArr(arreglo);
    printf("\n");
    impArr2(arreglo2);
    bubbleSortOptimizado(arreglo2);
    printf("\n");
    impArr2(arreglo2);
}

int bubbleSort(int arr[N])
{
    int i,j, aux;

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(arr[j] > arr[j+1])
            {
                aux = arr[j+1];
                arr[j+1] = arr[j];
                arr[j]= aux;

            }

        }


    }
}

int bubbleSortOptimizado(int arr2[N])
{
    int i,j,m = N-1, aux;

    for(i=0; i<N; i++)
    {
        for(j=0; j<m; j++)
        {
            if(arr2[j] > arr2[j+1])
            {
                aux = arr2[j+1];
                arr2[j+1] = arr2[j];
                arr2[j] = aux;

            }

        }

        m--;

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


void impArr2(int arr2[N])
{
    int i;

    for(i=0; i<N; i++)
    {
        printf("%d ", arr2[i]);
    }

}

