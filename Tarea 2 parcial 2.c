
#include <stdio.h>
#define N 10

int busCiclos(int valor, int arr[N]);
int busRecur(int valor, int arr[N], int cont);

int main()
{
    int arreglo[N] = {5,22,55,32,1,5,34,0,66,56};
    int val, flag=0, i=0;

    printf("Dame el valor que deseas encontrar: ");
    scanf("%d", &val);

   flag = busCiclos(val, arreglo);
    i= busRecur(val,arreglo, i);

    if(flag ==1 && i == 1)

        printf("El valor %d si se encuentra en el arreglo", val);
    else
        printf("El valor %d no se encuentra en el arreglo", val);


}


int busCiclos(int valor, int arr[N])
{
   int i, flag;

   for(i=0; i<N; i++)
   {
       if(valor == arr[i])
        flag = 1;
   }
   return flag;
}

int busRecur(int valor, int arr[N],int cont)
{
    if (cont < N)
    {
        if(arr[cont] != valor)

            return busRecur(valor, arr, cont+1);
        else
            cont = 1;
            return cont ;
    }
}


