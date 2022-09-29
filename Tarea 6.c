
#include <stdio.h>
#define ARRAY_SIZE 10

int main()
{
    int pattern[ARRAY_SIZE][ARRAY_SIZE];
    int p;

    printf("Dame el numero del patron: ");
    scanf("%d",&p);

    switch(p)
    {
      case 1: createPattern1(pattern);
      break;
      case 2: createPattern2(pattern);
      break;
      case 3: createPattern3(pattern);
      break;
      case 4: createPattern4(pattern);
      break;

    }

    imprime(pattern);
    return 0;
}
void createPattern4(int pattern[ARRAY_SIZE][ARRAY_SIZE])
{
    int r, c;
    int m;
    for(m=0;m<6;m++)
    {
        for(r=m; r<ARRAY_SIZE-m; r++)
        {
            for(c=m;c<ARRAY_SIZE-m;c++)
            {

                if(m%2==0)

                  pattern[r][c]=1;
                else
                    pattern[r][c]=0;

            }

        }

    if(m%2==0)

        pattern[m][m-1]=1;
    else
        pattern[m][m-1]=0;

    }
}

void createPattern3(int pattern[ARRAY_SIZE][ARRAY_SIZE])
{
    int r, c;
    int m;
    for(m=0;m<6;m++)
    {
        for(r=m; r<ARRAY_SIZE-m; r++)
        {
            for(c=m;c<ARRAY_SIZE-m;c++)
            {

                if(m%2==0)

                  pattern[r][c]=1;
                else
                    pattern[r][c]=0;

            }

        }

    }
}

void createPattern2(int pattern[ARRAY_SIZE][ARRAY_SIZE])
{
    int r, c;

    for(r=0; r<ARRAY_SIZE; r++)
    {
        for(c=0;c<ARRAY_SIZE;c++)
        {
            if(r == c )
            {
                  pattern[r][c]=1;
            }
            else
                {
                if(r == (ARRAY_SIZE-1) - c || c ==  (ARRAY_SIZE-1)-r)
                    pattern[r][c]=1;
                else
                    pattern[r][c]=0;
                }
        }
        printf("\n");

    }
}


void createPattern1(int pattern[ARRAY_SIZE][ARRAY_SIZE])
{
    int r, c;

    for(r=0; r<ARRAY_SIZE; r++)
    {
        for(c=0;c<ARRAY_SIZE;c++)
        {
            if(r == 0 || c == 0)
            {
                  pattern[r][c]=1;
            }
            else
                {
                if(r == ARRAY_SIZE-1 || c == ARRAY_SIZE-1)
                    pattern[r][c]=1;
                else
                    pattern[r][c]=0;
                }
        }
        printf("\n");

    }
}


void imprime(int pattern[ARRAY_SIZE][ARRAY_SIZE])
{
    int r,c;
    for(r=0; r<ARRAY_SIZE; r++)
    {
        for(c=0;c<ARRAY_SIZE;c++)
        {
            printf("%d ",pattern[r][c]);
        }
        printf("\n");

    }
}
