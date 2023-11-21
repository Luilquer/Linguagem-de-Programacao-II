#include <iostream> // entrada e saida de dados
#include <string.h>

using namespace std;

class Pessoa
{
protected:
    string m_nome;
    int m_idade;

public: 
      
    Pessoa() { };  
    Pessoa(string nome) : m_nome(nome) { };
    Pessoa(int idade) : m_idade(idade) { };
    ~Pessoa() {  };
    virtual void info() { cout << "Pessoa" << endl; };
    
   
};


class Empregado : public Pessoa
{
private:
    string m_setor;

public:

    Empregado() : m_setor(0)  {  };
    //Empregado(string nome) : m_nome(nome) { }; 
    Empregado(string setor) : m_setor(setor) { };
    ~Empregado() {  };
    void info() { cout << "Empregado" << endl; };
    
       
};


class Professor : public Empregado
{
private:
     float m_salario;

public:

    Professor() { };
    Professor(float salario) : m_salario(salario) {  };
    //Professor(int idade) : m_idade(idade) { };
    ~Professor() {  };
    void info() { cout << "Professor" << endl; };
    
    
       
};

int main ()
{
    Professor pro;
    pro.info();
    Pessoa p(25);
    p.info();
    Pessoa p2("Junior");
    Empregado e("Kaio");
    e.info();
    Empregado e2("ADM");
    
    

    return 0;
}