
#include <stdio.h>
#define N 10

int insSort(int arr[N]);
void impArr(int arr[N]);

int main()
{
    int arreglo[N] = {25,3,12,434,5,23,7,34,20,65};

    impArr(arreglo);
    printf("\n");
    insSort(arreglo);
    impArr(arreglo);


}

int insSort(int arr[N])
{
    int i, j, lim;

    for(i=1; i<N; i++)
    {
        lim = arr[i];
        j = i-1;

        while(j>=0 && arr[j] > lim)
        {
            arr[j+1]= arr[j];
            j = j-1;
        }

        arr[j+1] = lim;
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
