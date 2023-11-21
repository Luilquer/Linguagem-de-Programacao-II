/*
* Avaliação P1 – Programação Orientada à Objetos
* Parte 2 – Prática
* Carlos Luilquer Almeida Santos (20150465) 
*/

#include "pilha.hpp"

Pilha:: Pilha()
{

}

Pilha::~Pilha()
{

}

//LIFO
void Pilha::inserir(int numero)
{
    this->m_lista.push_back(numero);
}

//retira do final
void Pilha::remover()
{
    if(m_lista.begin() == m_lista.end())
    {
        cout << "\nPilha Vazia!" << endl;
    }

   this->m_lista.pop_back();
   
}

void Pilha::imprimir()
{
    cout << "Estrutura Pilha: " << endl;
    cout << "[ ";
    for(int i = 0; i < m_lista.size(); i++)
    {
        cout << this->m_lista[i] << ", ";
    }
    cout << " ] \n" << endl;
}