#include <iostream>
#include "listaeventos.h"

ListaEventos::ListaEventos()
{
    primer_nodo = nullptr;
    ultimo_nodo = nullptr;
}

NodoEvento *ListaEventos::obtenerPrimerNodo()
{
    return primer_nodo;
}

NodoEvento *ListaEventos::obtenerUltimoNodo()
{
    return ultimo_nodo;
}

int ListaEventos::contarNodos()
{
    int contador = 0;
    NodoEvento *actual = primer_nodo;
    while (actual != nullptr)
    {
        contador++;
        actual = actual->siguiente;
    }
    return contador;
}

void ListaEventos::agregarEvento(Evento nuevoEvento)
{
    NodoEvento *nuevoNodo = new NodoEvento;
    nuevoNodo->evento = nuevoEvento;
    nuevoNodo->anterior = ultimo_nodo;
    nuevoNodo->siguiente = nullptr;

    if (ultimo_nodo != nullptr)
    {
        ultimo_nodo->siguiente = nuevoNodo;
    }
    else
    {
        primer_nodo = nuevoNodo;
    }

    ultimo_nodo = nuevoNodo;
}

void ListaEventos::imprimirEventos()
{
    NodoEvento *actual = primer_nodo;
    while (actual != nullptr)
    {
        std::cout << "Evento: " << actual->evento.nombre << std::endl;
        actual = actual->siguiente;
    }
}
