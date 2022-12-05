#include <stdio.h>
#include "graphs.h"


int main()
{
    GRAPH graph;

    setupGraph(&graph);

    addVertice(&graph,'A');
    addVertice(&graph,'E');
    addVertice(&graph,'I');
    addVertice(&graph,'O');
    addVertice(&graph,'U');

    addRelation(&graph, 'A', 'U');
    addRelation(&graph, 'I', 'O');

    printGraph(graph);
    printf("\n");

    deleteVertice(&graph, 'E');
    deleteRelation(&graph, 'A', 'U');

    printGraph(graph);

}
