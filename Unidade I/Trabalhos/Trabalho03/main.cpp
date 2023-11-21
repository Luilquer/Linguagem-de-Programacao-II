#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

#define fdebug 1    //0 versão release    1 versão de produção

using namespace std;

int main()
{
    vector < pair < char, size_t > > table; //lockuptable

    //1.read alphabet
    if(fdebug) cout << "Enter with a alphabet: ";
    string pathfile;
    cin >> pathfile;

    ifstream pfile(pathfile); //tipo para leitura de arquivos
    if(!pfile.is_open())
    {
        if(fdebug) cout << "Error, file cannot be found..." << endl;
        return 1;
    }

    char ch;

    while(pfile.get(ch))
    {
        if(ch == '\n') continue;

        //declaração do pair
        pair<char, size_t> p;
        //atribuindo ao primeiro pair
        p.first = ch;
        //zerando o segundo
        p.second = 0;
        //adicionando ao vetor table, o p(pair)
        table.push_back(p);
        //mostrando o table
        cout << table.at(table.size() - 1).first << endl;

    }

    //exibindo o tamanho da table
    cout << table.size() << endl;
    //encerrando o arquivo aphabet
    pfile.close();


    //etapa 2 - leitura do manuscrito
    if(fdebug) cout << "enter with a manuscript: ";
    string pathfileman;
    cin >> pathfileman;

    pfile.open(pathfileman);
    if(!pfile.is_open())
    {
        if(fdebug) cout << "Error, file cannot be found..." << endl;
        return 1;
    }

    //Criando uma variavel do tipo stringstream
    stringstream manuscrito;
    //variavel temporaria
    string tmpstr;

    while(getline(pfile, tmpstr))
    {
        manuscrito >> tmpstr;
    }

    cout << manuscrito.str() << endl;

    pfile.close();




















    /*//criar table para calcular as frequencias dos caracteres ASC II Table
    //vector < pair < char, size_t > > table(256);  //#***

    for(size_t i=0; i<256; i++)
    {
        //table.at(i).first = i;
        //table[i].second = 0;

        pair <char , size_t> p;         //#***
        p = make_pair(i, i+5);          //#***
        //p.first = i;
        //p.second = i+5;
        table.push_back(p);             //#***
    }

    char ch;
    stringstream sst;
    while(pfile.get(ch))    //realizando leitura e display em tela
    {
        cout << ch;
        sst << ch;
        //table.at(ch).second++;
    }
    cout << sst.str() << endl;


    cout << endl;
    for(size_t i=0; i<sst.str().length(); i++)
    {
        char index = sst.str().at(i);

        cout << (char)table.at(index).second;
    }
    cout << endl;

    pfile.close();
    */

    return 0;
}
