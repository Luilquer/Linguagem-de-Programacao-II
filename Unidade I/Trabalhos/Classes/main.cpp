#include "dicionario.hpp"

#define fdebug 1

int main()
{
    vector<Dicionario> listaDic;

    while(true)
    {
        if(fdebug) cout << "Insira uma opção: " << endl;
        if(fdebug) cout << "1. Insirir um Dicionario: " << endl;
        if(fdebug) cout << "2. Insira uma opção: " << endl;
        if(fdebug) cout << "3. Insira uma opção: " << endl;
        if(fdebug) cout << "4. Insira uma opção: " << endl;
        if(fdebug) cout << "5. Insira uma opção: " << endl;
        if(fdebug) cout << "6. Insira uma opção: " << endl;
        if(fdebug) cout << "0. Sair " << endl;

        char ch;
        cin >> ch;

        //fflush()
        cin.ignome();

        //colocar stwch case
        if(ch == '1')
        {
            if(fdebug) cout  << "Entre com um path do Dicionario" << endl;
            string path;
            cin >> path;

            //Dicionario a;
            //a.LerDicionario(path);

            //sobrecarga de construtor
            Dicionario a(path);
            if(a.GetSize() > 0)
        }

        return 0;
    }




    Dicionario d1;
    // alocação dinamica
    Dicionario *d2 = new Dicionario();

    d1.LerDicionario("dict.txt");
    d2->LerDicionario("dict.txt");

    //desalocando
    delete d2;


    return 0;
}
