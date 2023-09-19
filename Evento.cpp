#include <numeric>
#include "evento.h"
#include "listaeventos.h"

bool esPrimo(int numero)
{
    if (numero <= 1)
        return false;
    if (numero <= 3)
        return true;
    if (numero % 2 == 0 || numero % 3 == 0)
        return false;

    for (int i = 5; i * i <= numero; i += 6)
    {
        if (numero % i == 0 || numero % (i + 2) == 0)
            return false;
    }

    return true;
}

bool sonCoprimos(int numero1, int numero2)
{
    if (numero1 == 0 || numero2 == 0)
        return false;
    if (std::gcd(numero1, numero2) == 1)
        return true;
    return false;
}

Evento crearEventoA(ListaEventos &listaEventos, bool &existeEventoA, int aleatorioA)
{
    if (esPrimo(aleatorioA))
    {
        Evento nuevoEventoA = {'A'};
        listaEventos.agregarEvento(nuevoEventoA);
        existeEventoA = true;
        return nuevoEventoA;
    }
    return {' '};
}

Evento crearEventoB(ListaEventos &listaEventos, bool &existeEventoB, int aleatorioB)
{
    if (esPrimo(aleatorioB))
    {
        Evento nuevoEventoB = {'B'};
        listaEventos.agregarEvento(nuevoEventoB);
        existeEventoB = true;
        return nuevoEventoB;
    }
    return {' '};
}

Evento crearEventoC(ListaEventos &listaEventos, bool &existeEventoC, NodoEvento *&nodoSingularidad, int aleatorioC)
{
    Evento nuevoEventoC = {'C'};
    listaEventos.agregarEvento(nuevoEventoC);
    existeEventoC = true;
    nodoSingularidad = listaEventos.obtenerUltimoNodo();
    return nuevoEventoC;
}
