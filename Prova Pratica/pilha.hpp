/*
* Avaliação P1 – Programação Orientada à Objetos
* Parte 2 – Prática
* Carlos Luilquer Almeida Santos (20150465) 
*/

#ifndef PILHA_H
#define PILHA_H

#include "estruturaDados.hpp"

class Pilha: public EstruturaDados
{

public:
    Pilha();
    ~Pilha();

    void inserir(int numero);
    void remover();
    void imprimir();

};





#endif