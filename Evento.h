#ifndef EVENTO_H
#define EVENTO_H

struct Evento
{
    char nombre;
};

bool esPrimo(int numero);
bool sonCoprimos(int numero1, int numero2);
Evento crearEventoA(class ListaEventos &listaEventos, bool &existeEventoA, int aleatorioA);
Evento crearEventoB(class ListaEventos &listaEventos, bool &existeEventoB, int aleatorioB);
Evento crearEventoC(class ListaEventos &listaEventos, bool &existeEventoC, class NodoEvento *&nodoSingularidad, int aleatorioC);

#endif // EVENTO_H


#ifndef PRACTICA_1_EVENTO_H
#define PRACTICA_1_EVENTO_H

#endif //PRACTICA_1_EVENTO_H
