#include <iostream>
#include <cstdlib>
#include <string>
#include "ude.hpp"

    using namespace std;

int main(int argc, char** argv)
{
    Carro c1;

    c1.setAno(2028);
    c1.setCor("Vermelho");
   // c1.setMarca("Fiat");

    Carro c2("Melhor carro do século", 2090);
   /* cout << c1.getCor() << endl;
    cout << c1.getMarca() << endl;
    cout << c1.getAno() << endl;
*/
    cout << c1.pneus << endl;
    cout << c2.pneus << endl;

    c1.pneus = 2;

    cout << c1.pneus << endl;
    cout << c2.pneus << endl;

    return 0;
}
