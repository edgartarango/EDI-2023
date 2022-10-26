
#include <stdio.h>
#define N 3
#define M 4

int leeMat(int mat[N][M] );
int sumMat(int mat[N][M], int mat2[N][M] );
int impMat(int mat2[N][M] );

void main()
{
    int matriz [N][M];
    int matriz2 [N][M];

    leeMat(matriz);
    sumMat(matriz, matriz2);
    impMat(matriz2);
}

int leeMat(int mat[N][M])
{
    int i, j;

    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
        printf("Valor: ");
        scanf("%d", &mat[i][j]);
        }
    }

}

int sumMat(int mat[N][M], int mat2[N][M])
{
    int i, j;
    int a,b,c,d;

     for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            if(j == 0)
                a = 0;
            else
                a = mat[i][j-1];

            if(i == 0)
                b = 0;
            else
                b = mat[i-1][j];

            if(j == M-1)
                c = 0;
            else
                c = mat[i][j+1];

            if(i == N-1)
                d = 0;
            else
                d = mat[i+1][j];

            mat2[i][j] = mat[i][j] + a + b + c + d;


        }
    }
}

int impMat(int mat2[N][M])
{
    int i,j;

    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
        printf(" %d ", mat2[i][j]);
        }

        printf("\n");
    }

}
