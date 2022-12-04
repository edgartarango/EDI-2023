
#include <stdio.h>
#include "sets.h"



int deleteElement(SET *s, int value);
int deleteStartElement(SET *s, int *value);
int deleteEndElement(SET *s, int *value);
void intersect(SET a, SET b, SET *result);
void unionSet(SET a, SET b, SET *result);
void differences(SET a, SET b, SET *result);
void attach(SET *a, SET b);
void printSet(SET s);


int main()
{
    SET setA;
    SET setB;
    SET inter;
    SET uni;
    SET dife;

    setupSet(&setA);
    setupSet(&setB);

    int i;
    int aux1, aux2;

    for(i=0; i<10; i++)
    {
        addElement(&setA, i);
        addElement(&setB, i+5);
    }

    printf("Set A:\n");
    printSet(setA);
    printf("Set B:\n");
    printSet(setB);


    deleteElement(&setA, 6);
    printf("Set A borrando el 6:\n");
    printSet(setA);

    deleteStartElement(&setB, &aux1);
    printf("El valor borrado al principio del set B es: %d\n", aux1);

    deleteEndElement(&setB,&aux2);
    printf("El valor borrado al final del set B es: %d\n", aux2);

    setupSet(&inter);
    setupSet(&uni);
    setupSet(&dife);



    intersect(setA, setB, &inter);

        printf("Set de interseccion:\n");

        printSet(inter);

    unionSet(setA, setB, &uni);

        printf("Set de union:\n");

        printSet(uni);

    differences(setA, setB, &dife);

        printf("Set de diferencias:\n");

        printSet(dife);

    attach(&setA, setB);

        printf("Set A sumado con B:\n");

        printSet(setA);


    return 0;
}


int deleteElement(SET *s, int value)
{
    int found = -1;
    int i;

    for(i=0; i<s->size && found== -1; i++)
    {
        if(s->data[i]==value)
            found=i;
    }

    if(found != -1)
    {
        int actual;

        for(actual=found; actual<s->size; actual++)
        {
            s->data[actual]=s->data[actual+1];
        }

        s->size--;

        return 1;
    }
    return 0;
}

int deleteStartElement(SET *s, int *value)
{
    int i = 0;

    *value = s->data[i];
    s->data[i] = s->data[i+1];
    s->size--;


}

int deleteEndElement(SET *s, int *value)
{
    int i = s->size;

    *value = s->data[i];
    s->data[i] = s->data[i+1];

}

void intersect(SET a, SET b, SET *result) // hacer un nuevo conjunto con los elementos en común de 2 conjuntos
{
    int i;

    for(i=0; i<a.size; i++)
    {
        if(existElement(b, a.data[i]) == 1)
        {
            addElement(result, a.data[i]);
        }
    }
}

void unionSet(SET a, SET b, SET *result)
{
    int i;

    for(i=0; i<a.size; i++)
    {
        if(existElement(*result, a.data[i]) == 0)
        {
            addElement(result, a.data[i]);
        }
    }

    for(i=0; i < b.size; i++)
    {
        if(existElement(*result, b.data[i]) == 0)
        {
            addElement(result, b.data[i]);
        }
    }
}

void differences(SET a, SET b, SET *result)
{
    int i;

    for(i=0; i<a.size; i++)
    {
        if(existElement(b, a.data[i]) == 0)
        {
            addElement(result, a.data[i]);
        }
    }

      for(i=0; i<b.size; i++)
    {
        if(existElement(a, b.data[i]) == 0)
        {
            addElement(result, b.data[i]);
        }
    }
}

void attach(SET *a, SET b)
{
    int i;

    for(i=0; i<b.size; i++)
    {
        if(existElement(*a, b.data[i]) == 0)
        {
            addElement(a, b.data[i]);
        }
    }
}

void printSet(SET s)
{
    int i;
    printf("\n");
    for(i=0; i< s.size; i++)
    {
        printf("%d\n", s.data[i]);
    }
}
