/*
* Avaliação P1 – Programação Orientada à Objetos
* Parte 2 – Prática
* Carlos Luilquer Almeida Santos (20150465) 
*/

#ifndef FILA_H
#define FILA_H


#include "estruturaDados.hpp"

class Fila : public EstruturaDados
{

public:
    Fila();
    ~Fila();

    void inserir(int numero);
    void remover();
    void imprimir();
};






#endif