/*
* Avaliação P1 – Programação Orientada à Objetos
* Parte 2 – Prática
* Carlos Luilquer Almeida Santos (20150465) 
*/

#include "estruturaDados.hpp"

EstruturaDados::EstruturaDados()
{
    this->m_lista.empty();
}

EstruturaDados::EstruturaDados(vector<int> lista)
{
    this->m_lista = lista;
}

EstruturaDados::~EstruturaDados()
{
    
}

void EstruturaDados::resetar()
{
    this->m_lista.clear();
}

void EstruturaDados::getTamanho()
{
   int tamanho =  this->m_lista.size();
   cout << "Tamanho: " << tamanho << endl;
}