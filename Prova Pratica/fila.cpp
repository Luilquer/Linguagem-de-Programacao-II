/*
* Avaliação P1 – Programação Orientada à Objetos
* Parte 2 – Prática
* Carlos Luilquer Almeida Santos (20150465) 
*/

#include "fila.hpp"

Fila:: Fila()
{

}

Fila::~Fila()
{

}

//insere no final
void Fila::inserir(int numero)
{
    this->m_lista.push_back(numero);
}

//retira do inicio
void Fila::remover()
{
   if(m_lista.begin() == m_lista.end())
   {
       cout << "\nFila Vazia!" << endl;
   }

   else
   {

       m_lista.erase(m_lista.begin());

   }
   
}

void Fila::imprimir()
{
    cout << "Estrutura Fila: " << endl;
    cout << "[ ";
    for(int i = 0; i < m_lista.size(); i++)
    {
        cout << this->m_lista[i] << ", ";
    }
    cout << " ] \n" << endl;

}