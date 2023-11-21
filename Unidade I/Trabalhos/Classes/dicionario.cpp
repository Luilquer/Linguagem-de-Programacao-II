#include "dicionario.hpp"

Dicionario::Dicionario()
{
    cout << "Construtor" << endl;
}
Dicionario::~Dicionario()
{
    cout << "Chamda do destrutor." << endl;
}

bool Dicionario::LerDicionario(string path)
{
    cout << "Lendo arquindo " << path << endl;

    ifstream arquivo;
    arquivo.open(path);

    if(arquivo.is_open())
    {

        string tmp;
        while(getline(arquivo, tmp))
        {

            m_lista.push_back(tmp);
        }

        m_lista.erase(m_lista.begin() + 0);
    }

    else
    {
        return false;
    }

    return true;
}

void Dicionario::ExibirDicionario()
{
    if(m_lista.size() == 0)
    {
        cout << "Dicionario vazio" << endl;
    }

    for(size_t i = 0; i < m_lista.size(); i++)
    {
        cout << m_lista.at(i) << endl;
    }
}
