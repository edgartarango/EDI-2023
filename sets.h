#ifndef SETS_H_INCLUDED
#define SETS_H_INCLUDED

#define SET_CAPACITY 100

typedef struct
{
    int data[SET_CAPACITY];
    int size;
}SET;

void setupSet(SET *s);
int addElement(SET *s, int value);
int existElement(SET s, int value);

void setupSet(SET *s)
{
    s->size = 0;
}

int addElement(SET *s, int value)
{
    if(existElement(*s, value) == 0 && s->size < SET_CAPACITY)
    {
        s->data[s->size] = value;
        s->size++;
        return 1;
    }
    return 0;
}

int existElement(SET s, int value)
{
    int i;

    for(i=0; i < s.size; i++)
    {
        if(s.data[i] == value)
            return 1;
    }
    return 0;
}




#endif // SETS_H_INCLUDED
