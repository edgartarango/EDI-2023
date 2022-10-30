#include <stdio.h>
#define N 10

int quickSort(int arr[N], int pri, int ult);
void impArr(int arr[N]);


int main()
{
    int arreglo[N] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int fst =0 , lst = N-1;

    impArr(arreglo);
    printf("\n ");
    quickSort(arreglo, fst, lst);
    impArr(arreglo);

}

int quickSort(int arr[N], int pri, int ult)
{
    int i, j, med, piv, aux;

    med = (pri + ult)/2;

    piv = arr[med];

    i = pri;
    j = ult;

    do
    {
        while(arr[i] < piv)
            i++;
        while(arr[j] > piv)
            j--;

        if(i<=j)
        {


            aux = arr[i];
            arr[i]= arr[j];
            arr[j]= aux;
            i++;
            j--;
        }
    }
    while(i<=j);

    if(pri < j)
    {
        quickSort(arr, pri, j);
    }
    if(i<ult)
    {
        quickSort(arr, i, ult);
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
