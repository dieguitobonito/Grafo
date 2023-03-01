#ifndef NODOS_H
#define NODOS_H

#include <iostream>
#include <string>


// Prototipado para las clases
// Así se sabe de su existencia (tipo variable global)
class nodoVertice;
class nodoArista;


// Nombres concisos
class nodoVertice{
        public:
                std::string nombre;
                nodoVertice* sigVer;
                // Cabecera
                nodoArista* hArista;

                // Constructores
                nodoVertice(){
                        nombre = "";
                        sigVertice = nullptr;
                        hArista = nullptr;
                }

                nodoVertice(std::string nombre, nodoVertice* sigVer, nodoArista* hArista){
                        this->nombre = nombre;
                        this->sigVer = sigVer;
                        this->hArista = hArista;
                }
};

class nodoArista{
        public:
                int costo;
                nodoArista* sigArista;
                nodoVertice* destino;

                // Constructores
                nodoArista(){
                        costo = 0;
                        sigArista = nullptr;
                        destino = nullptr;
                }

                nodoArista(int costo, nodoArista* sigArista, nodoVertice* destino){
                        this->costo = costo;
                        this->sigArista = sigArista;
                        this->destino = destino;
                }
};

#endif // NODOS_H
