#ifndef GRAFO_H
#define GRAFO_H

#include <iostream>
#include <string>
#include "Nodos.h"

class Grafo{
        public:
                nodoVertice* hGrafo;

                void insertarVertice(std::string);
                void insertarArista(std::string, std::string, int);
                nodoVertice* buscarVertice(std::string);
                void mostrarGrafo();
                void eliminarVertice(std::string);
                // Se necesita origen y destino
                void eliminarArista(std::string, std::string);


                // Constructor
                Grafo();
};


#endif // GRAFO_H
