//ARquivo de cabeçalho: só tem oque a classe possui, mas não o conteúdo dos métodos
//ou seja, fala o que existe

#include <string>

    using namespace std;

    class Carro
    {
    public:
        static int pneus; //Atributo da classe, ou seja, qualquer atributo irá possuir o valor atribuido a ele. Se um mudar, todos mudam
        Carro();//Construtor: constroi um objeto
        Carro(string marca, int ano);// construtor com paeametros
        ~Carro(); //Destrutor: destroi a clase feita, ou seja, obejeto.
        void setMarca(string marca);
        string getMarca();

        void setAno(int ano);
        int getAno();

        void setCor(string cor);
        string getCor();
    private:
        string marca;
        int ano;
        string cor;

    };
