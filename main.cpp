#include <iostream>
#include <cstdlib>
#include <ctime>
#include "evento.h"
#include "listaeventos.h"
int main(){
    srand(time(0));

    ListaEventos listaEventos;
    bool existeEventoA = false;
    bool existeEventoB = false;
    bool existeEventoC = false;
    NodoEvento *nodoSingularidad = nullptr;

    int aleatorioA;
    int aleatorioB;
    int aleatorioC;

    int numEventos = rand() % 22 + 100;

    while (true)
    {
        aleatorioA = rand() % 100 + 1;

        Evento eventoA = crearEventoA(listaEventos, existeEventoA, aleatorioA);

        if (existeEventoA)
        {
            aleatorioB = rand() % 10; // Generar aleatorioB solo si existe evento A
            Evento eventoB = crearEventoB(listaEventos, existeEventoB, aleatorioB);

            if (existeEventoB)
            {
                aleatorioC = rand() % 100 + 1;
                Evento eventoC = crearEventoC(listaEventos, existeEventoC, nodoSingularidad, aleatorioC);

                if (existeEventoC)
                {
                    std::cout << "A: " << aleatorioA << " B: " << aleatorioB << " C: " << aleatorioC << std::endl;
                    if (esPrimo(aleatorioC))
                    {
                        std::cout << "Viajo a el pasado y entrego informacion a cientifico2." << std::endl;
                    }
                    else if (sonCoprimos(aleatorioA, aleatorioC))
                    {
                        std::cout << "El cientifico2 pudo volver al pasado solo a observar." << std::endl;
                    }
                }
            }
        }

        if (listaEventos.contarNodos() > 3 && listaEventos.contarNodos() <= 22)
        {
            break;
        }
    }


    int cantidadEventosA = 0;
    int cantidadNodosEventosA = 0;

    NodoEvento *actual = listaEventos.obtenerPrimerNodo();
    while (actual != nullptr)
    {
        if (actual->evento.nombre == 'A')
        {
            cantidadEventosA++;
            cantidadNodosEventosA++;
        }
        actual = actual->siguiente;
    }


    std::cout << "Cantidad de nodos de eventos tipo A: " << cantidadNodosEventosA << std::endl;


    int cantidadEventosB = 0;
    int cantidadNodosEventosB = 0;

    actual = listaEventos.obtenerPrimerNodo();
    while (actual != nullptr)
    {
        if (actual->evento.nombre == 'B')
        {
            cantidadEventosB++;
            cantidadNodosEventosB++;
        }
        actual = actual->siguiente;
    }


    std::cout << "Cantidad de nodos de eventos tipo B: " << cantidadNodosEventosB << std::endl;

    if (existeEventoC)
    {
        std::cout << "Existe la singularidad (evento C)." << std::endl;


        NodoEvento *nodoActual = nodoSingularidad;
        while (nodoActual != nullptr)
        {
            std::cout << "Evento: " << nodoActual->evento.nombre << std::endl;
            nodoActual = nodoActual->anterior;
        }
    }
    else
    {
        std::cout << "No existe la singularidad (evento C)." << std::endl;
    }



    return 0;
}
