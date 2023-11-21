/*
* Avaliação P1 – Programação Orientada à Objetos
* Parte 2 – Prática
* Carlos Luilquer Almeida Santos (20150465) 
*/

#include "fila.hpp"
#include "pilha.hpp"

#define fdebug 0

int main()
{
    EstruturaDados *estrutura = new EstruturaDados();
    Fila *fila = (Fila*) estrutura;
    Pilha *pilha = (Pilha*) estrutura;
    int opcao2 = 0;

    while (true)
    {
        if (fdebug) cout << "\nSelecione uma Opcao: " << endl;
        if (fdebug) cout << "1. Fila" << endl;
        if (fdebug) cout << "2. Pilha" << endl;
        if (fdebug) cout << "0. Sair\n" << endl;

        char opcao;
        cin >> opcao;
        cin.ignore();

        //FILA
        if (opcao == '1' && fdebug)
        {
            do           
            {
                    if (fdebug) cout << "\nSelecione uma Opcao: " << endl;
                    if (fdebug) cout << "1. Inserir" << endl;
                    if (fdebug) cout << "2. Remover" << endl;
                    if (fdebug) cout << "3. Limpar" << endl;
                    if (fdebug) cout << "4. Imprimir" << endl;
                    if (fdebug) cout << "5. Tamanho Fila" << endl;
                    if (fdebug) cout << "6. Retornar Menu Anterior\n" << endl;

                    
                    cin >> opcao2;
                    cin.ignore();

                    switch (opcao2)
                    {
                            //Inserir
                            case 1:
                                {
                                    if (fdebug) cout << "Insira um valor " << endl;

                                    int valor;
                                    cin >> valor;
                                    cin.ignore();

                                    fila->inserir(valor);
                                
                                }
                                break;
                                
                                

                        //REMOVER
                            case 2:
                                {
                                    
                                    fila->remover();

                                }
                                
                                break;
                                

                                

                            //LIMPAR  
                            case 3:
                                {
                                    fila->resetar();
                                }
                                
                                break;
                            

                                

                            //IMPRIMIR
                            case 4:
                                {
                                    fila->imprimir();
                                }
                                
                                break;
                                

                                

                            //TAMANHO FILA
                            case 5:
                                {
                                    fila->getTamanho();
                                }
                                
                                break;
                                
                                
                                
                            //RETORNAR AO MENU PRINCIPAL
                            case 6:
                                {
                                    break;
                                }

                            default:
                                {

                                    cout << "Opcao invalida!" << endl;
                                    
                                }
                                
                                break;
                   
                    }

            } while(opcao2 != 6);
            
        }

        //PILHA
        if (opcao == '2' && fdebug)
        {
            do
            {
                    if (fdebug) cout << "\nSelecione uma Opcao: " << endl;
                    if (fdebug) cout << "1. Inserir" << endl;
                    if (fdebug) cout << "2. Remover" << endl;
                    if (fdebug) cout << "3. Limpar" << endl;
                    if (fdebug) cout << "4. Imprimir" << endl;
                    if (fdebug) cout << "5. Tamanho Pilha" << endl;
                    if (fdebug) cout << "6. Retornar Menu Anterior\n" << endl;

                    
                    cin >> opcao2;
                    cin.ignore();

                    switch (opcao2)
                    {
                            //Inserir
                            case 1:
                                {
                                    if (fdebug) cout << "Insira um valor " << endl;

                                    int valor;
                                    cin >> valor;
                                    cin.ignore();

                                    pilha->inserir(valor);

                                }
                                
                                break;

                             //REMOVER
                            case 2:
                                {

                                pilha->remover();

                                }
                                
                                break;

                            //LIMPAR  
                            case 3:
                                {

                                    pilha->resetar();

                                }
                                
                                break;

                            //IMPRIMIR
                            case 4:
                                {

                                    pilha->imprimir();

                                }
                                
                                break;

                            //TAMANHO LISTA
                            case 5:
                                {

                                    pilha->getTamanho();

                                }
                                
                                break;

                            //RETORNAR AO MENU PRINCIPAL
                            case 6:
                                {
                                    break;
                                }

                            default:
                                {

                                    cout << "Opcao invalida!" << endl;
                                    
                                }

                                break;
                   
                    }

                    
            } while(opcao2 != 6);
           
        }
   
        
        //Sair
        if (opcao == '0' && fdebug)
        {
            delete estrutura;
            break;
        }
            
    }
    
    
    return 0;
}
 



