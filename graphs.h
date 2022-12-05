#ifndef GRAPHS_H_INCLUDED
#define GRAPHS_H_INCLUDED

#define GRAPH_CAPACITY 100

typedef struct
{
    char elements[GRAPH_CAPACITY];
    int matrix[GRAPH_CAPACITY][GRAPH_CAPACITY];
    int noElements;
}GRAPH;

void setupGraph(GRAPH *g);
int addVertice(GRAPH *g, char vertice);
int addRelation(GRAPH *g, char org, char des);
int findVertice(char elements[GRAPH_CAPACITY], int size, char value);
int deleteRelation(GRAPH *g, char org, char des);
int deleteVertice(GRAPH *g, char ver);
void printGraph(GRAPH g);


void setupGraph(GRAPH *g)
{
    int i,j;

    g->noElements = 0;

    for(i=0;i<GRAPH_CAPACITY; i++)
    {
        for(j=0;j<GRAPH_CAPACITY; j++)
        {
          g->matrix[i][j]=0;
        }


    }

}

int addVertice(GRAPH *g, char vertice)
{
    if(g->noElements < GRAPH_CAPACITY)
    {
        g->elements[g->noElements] = vertice;

        g->noElements++;

        return 1;
    }
    return 0;
}

int addRelation(GRAPH *g, char org, char des)
{
    int posOrg = findVertice(g->elements, g->noElements, org);
    int posDes = findVertice(g->elements, g->noElements, des);

    if(posOrg != -1 && posDes != -1)// emcontro ambos
    {
        g->matrix[posOrg][posDes] = 1;
        g->matrix[posDes][posOrg] = 1;
        return 1;
    }
    return 0;

}

int findVertice(char elements[GRAPH_CAPACITY], int size, char value)
{
    int i;
    int pos = -1;

    for(i=0; i< size; i++)
    {
        if(elements[i] == value)
            pos = i;
    }

    return pos;

}

void printGraph(GRAPH g)
{

    int i,r,c;

    printf("\t");

    for(i=0; i< g.noElements; i++)
    {
        printf("%c\t", g.elements[i]);
    }

    printf("\n");

    for(r=0; r<g.noElements; r++)
    {
        printf("%c\t", g.elements[r]);
        for(c=0; c<g.noElements; c++)
        {
            printf("%d\t", g.matrix[r][c]);
        }
        printf("\n");
    }
}

int deleteRelation(GRAPH *g, char org, char des)
{
    int posOrg = findVertice(g->elements, g->noElements, org);
    int posDes = findVertice(g->elements, g->noElements, des);

    if(posOrg != -1 && posDes != -1)// emcontro ambos
    {
        g->matrix[posOrg][posDes] = 0;
        g->matrix[posDes][posOrg] = 0;
        return 1;
    }
    return 0;

}

int deleteVertice(GRAPH *g, char ver)
{
    int i;
    int posVer = findVertice(g->elements, g->noElements, ver);

    if(posVer != -1)
    {
        g->elements[posVer] = g->elements[g->noElements-1];



        for(i=0; i<g->noElements; i++)
        {
            g->matrix[posVer][i] = g->matrix[g->noElements-1][i];
            g->matrix[i][posVer] =  g->matrix[i][g->noElements-1];
        }
            g->matrix[posVer][posVer] = g->matrix[g->noElements-1][g->noElements-1];

            g->noElements--;

            return 1;
    }


return 0;
}



#endif // GRAPHS_H_INCLUDED
