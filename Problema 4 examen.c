
#include <stdio.h>

int calculos(int *, int *, int *);

int main()
{
    int A,B,C;

    printf("Dame el valor de a: ");
    scanf("%d", &A);
    printf("Dame el valor de b: ");
    scanf("%d", &B);
    printf("Dame el valor de c: ");
    scanf("%d", &C);

    calculos(&A, &B, &C);

    printf(" El valor de A es ahora: %d\nEl valor de B es ahora: %d\nEl valor de C es ahora: %d\n ", A,B,C);


}

int calculos(int *a, int *b, int *c)
{
    if( *a > *b)
    {
        *b = *b + *b;
    }else
    {
        *c = *c - *a;
    }

    if(*c < 0)
    {
        *c = *c * (-1);
    }

}
