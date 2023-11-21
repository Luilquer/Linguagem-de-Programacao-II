#include <iostream>
#include <fstream>
#include <sstream>
#include<vector>

#define fdegub 1 //0 versão release 1 versão de produção

using namespace std;

int main()
{

    if(fdegub) cout << "Enter with a filename" << endl;
    string pathfile;
    cin >> pathfile;

    ifstream pfile(pathfile); // tipo para leitura do arquivo
    //pfile.open(pathfile);
    /*int i1 = 10;
    int i2(10);*/
    if(pfile.is_open() == false)
    {
        if(fdegub) cout << "Error, file cannot be found" << endl;

        return 1;
    }

    vector < pair< char, size_t> > table(256);

    for(size_t i = 0; i < 256; i++)
    {
        table.at(i).first = i;
        table[i].second = 0;
        /*Ou
        pair <char , size_t> p;         //#***
        p = make_pair(i, 0);            //#***
        table.push_back(p);             //#***

        */
    }

    char ch;
    stringstream sst;
    //realizando leitura e display em tela
    while(pfile.get(ch))
    {
        cout << ch;
        sst << ch;
        table.at(ch).second++;
    }

    //converte o fluxo stream para string
    cout << sst.str() << endl;
    //mostrar a frequancia de caracteres
    //if(fdegub) cout << ch;

    //mostrar a frequencia de caracteres
    for(size_t i = 0; i < 256; i++)
    {
        //verificando quem é diferente de zero
        if(table.at(i).second != 0)
        {
            cout << (char) table.at(i).first << "->" << table.at(i).second << endl;
        }
    }


    pfile.close();
    return 0;

    //<Tippo primeiro elemento, Tipo segundo elemento>
   /* pair< int, int > p1;
    pair< int, int> p2;
    pair< int, string> p3;

    p1.first = 10;
    p1.second = 10;
    p2 = make_pair(25, 25);
    p3.first = 77;
    p3.second = "String";

    vector< pair <int, int>> listapares;
    listapares.push_back(p1);

    cout << listapares.size() <, endl;

    for(size_t i = 0; i < listapares.size(); i++)
    {
        pair <int, int> p = listapares.at(i);
        cout << p.first << "->" << p.second << endl;
    }*/

}
