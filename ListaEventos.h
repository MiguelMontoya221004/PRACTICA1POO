#ifndef LISTAEVENTOS_H
#define LISTAEVENTOS_H

#include "evento.h"

struct NodoEvento
{
    Evento evento;
    NodoEvento *anterior;
    NodoEvento *siguiente;
};

class ListaEventos
{
private:
    NodoEvento *primer_nodo;
    NodoEvento *ultimo_nodo;

public:
    ListaEventos();
    NodoEvento *obtenerPrimerNodo();
    NodoEvento *obtenerUltimoNodo();
    int contarNodos();
    void agregarEvento(Evento nuevoEvento);
    void imprimirEventos();
};

#endif // LISTAEVENTOS_H


#ifndef PRACTICA_1_LISTAEVENTOS_H
#define PRACTICA_1_LISTAEVENTOS_H

#endif //PRACTICA_1_LISTAEVENTOS_H
