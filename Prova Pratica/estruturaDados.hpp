/*
* Avaliação P1 – Programação Orientada à Objetos
* Parte 2 – Prática
* Carlos Luilquer Almeida Santos (20150465) 
*/

#ifndef ESTRUTURADADOS_H
#define ESTRUTURADADOS_H

#include <iostream>
#include <vector>

using namespace std;

class EstruturaDados
{
protected:
    vector<int> m_lista;

public:
    EstruturaDados();
    EstruturaDados(vector<int> lista);
    ~EstruturaDados();

    void resetar();
    void getTamanho();

};












#endif