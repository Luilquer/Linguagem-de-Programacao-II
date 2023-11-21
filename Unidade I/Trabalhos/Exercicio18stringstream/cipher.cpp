#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

#define fdebug 1    //0 versão release    1 versão de produção

using namespace std;

int main()
{
    if(fdebug) cout << "enter with a filename: ";
    string pathfile;
    cin >> pathfile;

    ifstream pfile(pathfile); //tipo para leitura de arquivos
    if(!pfile.is_open())
    {
        if(fdebug) cout << "Error, file cannot be found..." << endl;
        return 1;
    }

    //criar table para calcular as frequencias dos caracteres ASC II Table
    //vector < pair < char, size_t > > table(256);  //#***
    vector < pair < char, size_t > > table;
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

    return 0;
}
