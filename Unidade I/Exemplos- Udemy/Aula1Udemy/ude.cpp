//Aequivo responsável por falar o que o método faz

#include "ude.hpp"
#include <string>
#include <iostream>

    using namespace std;

    void Carro::setMarca(string marca)
    {
        this->marca = marca;
    }
    string Carro::getMarca()
    {
        return marca;
    }

    void Carro::setAno(int ano)
    {
        if(ano > 2020)
        {
           this->ano = ano;
        }
        else
        {
            this->ano = 2020;
        }
    }
    int Carro::getAno()
    {
        return ano;
    }
    void Carro::setCor(string cor)
    {
        this->cor = cor;
    }
    string Carro::getCor()
    {
        return cor;
    }

    Carro::Carro()
    {
        this->marca = "Pica das galaxias";
    }

    Carro::Carro(string marca, int ano)
    {
        this->marca = marca;
        this->ano = ano;
    }
    Carro::~Carro()
    {
        cout << "A clase carro foi destruida com sucesso!" << endl;
    }

    int Carro::pneus = 4;

