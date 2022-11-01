#include <stdio.h>
#define N 10

void impArr(int arr[N]);
int bubbleSort(int arr[N]);


int main()
{
    int arreglo[N]= {24,15,2,66,47,86,45,35,346,423};

    impArr(arreglo);
    bubbleSort(arreglo);
    printf("\n");
    impArr(arreglo);
    printf("\n");

}

int bubbleSort(int arr[N])
{
    int i,j, aux;

    for(i=0; i<N; i++)
    {
        for(j=0; j<N-1; j++)
        {
            if(arr[j] < arr[j+1])
            {
                aux = arr[j+1];
                arr[j+1] = arr[j];
                arr[j]= aux;

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
