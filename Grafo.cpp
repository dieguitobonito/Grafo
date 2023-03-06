#include "Grafo.h"

Grafo::Grafo(){

}

void Grafo::insertarVertice(std::string nom){
        nodoVertice* tmp = new nodoVertice(nom, nullptr, nullptr);
        nodoVertice* aux = hGrafo;

        // El grafo está vacío
        if(aux == nullptr){
                hGrafo = tmp;
        }else{
                while(aux->sigVer != nullptr)
                        aux = aux->sigVer;
                aux->sigVer = tmp;
        }
}

void Grafo::insertarArista(std::string origen, std::string destino, int costo){
        nodoVertice* auxVertice = hGrafo;
        bool band = true;

        // Búsqueda de origen y destino
        if(auxVertice != nullptr){
                // Encuentra el primer nombre, teniendo en cuenta
                // que no sea falso
                while(auxVertice && band)
                        if(auxVertice->nombre == origen)
                                band = false;
                        else
                                auxVertice = auxVertice->sigVer;

                if(!auxVertice)
                        std::cout << "No existe el origen" << std::endl;
                else{

                        nodoVertice* verticeDestino = buscarVertice(destino);
                        if(!verticeDestino)
                                std::cout << "Destino inválido" << std::endl;
                        else{
                                nodoArista* tmpArista = new nodoArista(costo,
                                                                       nullptr,
                                                                       verticeDestino);
                                // Cambiar aux a auxVertice
                                // auxArista = auxVertice;
                                nodoArista* auxArista = auxVertice->hArista;
                                if(auxArista == nullptr)
                                       auxVertice->hArista = tmpArista;
                                else{
                                        while(auxArista->sigArista)
                                                auxArista = auxArista->sigArista;
                                        auxArista->sigArista = tmpArista;
                                }
                        }
                }
        }
}

nodoVertice* Grafo::buscarVertice(std::string destino){
        nodoVertice* aux = hGrafo;
        bool band = true;

        if(aux){
                while(aux and band){
                        if(aux->nombre == destino)
                                band = false;
                        else
                                aux = aux->sigVer;
                }
        }
        return aux;
}

void Grafo::mostrarGrafo(){
        nodoVertice* auxVertice = hGrafo;
        // Cada paso de vértice se tiene que inicializar en null
        nodoArista* auxArista = nullptr;

        while(auxVertice){
                std::cout << "Vértice: " << auxVertice->nombre
                        << ": ";
                auxArista = auxVertice->hArista;
                while(auxArista){
                        std::cout << '('
                                << auxArista->destino
                                << ", "
                                << auxArista->costo << "), ";
                        auxArista = auxArista->sigArista;
                }
                std::cout << std::endl;
                auxVertice = auxVertice->sigVer;
        }
}

void Grafo::eliminarVertice(std::string){
}

void Grafo::eliminarArista(std::string, std::string){

}

void Grafo::mostrarVertices(){
        nodoVertice* aux = hGrafo;
        while(aux){
                std::cout << aux->nombre << std::endl;
                std::cout << aux->sigVer << std::endl;
                aux = aux->sigVer;
        }
}
