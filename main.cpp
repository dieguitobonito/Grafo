#include <iostream>
#include "Grafo.h"
Grafo uno;

int main() {
        uno.insertarVertice("jose");
        uno.insertarVertice("maria");
        uno.insertarVertice("diego");
        uno.insertarVertice("marcos");
        uno.insertarVertice("michel");
        uno.insertarVertice("christian");
        uno.insertarVertice("pablo");
        uno.mostrarVertices();

        uno.insertarArista("jose", "maria", 5);
        uno.insertarArista("jose", "maria", 5);
        uno.insertarArista("jose", "maria", 5);
        uno.insertarArista("jose", "maria", 5);

        uno.mostrarGrafo();

        return 0;
}
