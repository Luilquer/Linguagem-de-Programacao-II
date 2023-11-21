#include <iostream>
#include <vector>
#include <fstream> // leitura dos arquivos

using namespace std;
//nome em maiusculo por padrao
class Dicionario
{
private:
    //atributos: em geral � privado
    //variavel membro da classee
    vector<string> m_lista;

    //metodos
public:

    //construtores e destrutores
    //sempre possui o mesmo nome da classe
    //n�o possui tipo
    Dicionario(); // construtor, quantos precisar, uma unica chamada

    //Destrutor
    ~Dicionario();//destrutor, chamado automaticamente  quando o escopo termina

    bool LerDicionario(string path);
    void ExibirDicionario();
};
