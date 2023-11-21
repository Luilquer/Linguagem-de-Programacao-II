#include "dict.hpp"

int main(int argc, char* argv[])
{
    //COMO PASSAR ARGUMETOS DO SO PARA O PROGRAMA, mas tem que configurar
   /* cout << "Number of arguments is " << argc << endl;

    for(unsigned int i =0; i<argc; i++)
    {

        cout << "argument # " << i+1 << " is: " << endl;
    }*/

   /* if(argc != 2)
    {
        cout << "Error, input should be <exec> <file.txt>" << endl;

        return 1;

    }*/

   vector<string> list = LoadDictionary("dict.txt");
    if(list.size() == 0)
    {
        cout << "File not found" << endl;
        return 1;
    }

    size_t i = 0;


    do{

        cout << "Word #" << i+1 << " -> " << list.at(i) << endl;
        i++;
    } while(i <= list.size());

    //Search

    string query = "banana";
    size_t index =0;
    bool located = searchWord(list, query, index);
    if(located)
    {
        cout << "word :" << query << "was located at index " << index << endl;
    }
    else
    {
        cout << "There is no :" << query << "in out dictionary" << endl;
    }

   /* vector<pair<size_t

    pair<size_t, string> p1(10, "Exemplo1");
    pair<size_t, string> p1(20, "Exemplo2");
    pair<size_t, string> p1(30, "Exemplo3");
    pair<size_t, string> p1(40, "Exemplo4");

    vector <pair<size_t, string > > list1;
    list1.push_back(p1);
    list1.push_back(p2);
    list1.push_back(p3);
    list1.push_back(p4);

    cout << "Pair 1 is: " << p1.first << " - " << p1.second << endl;
    cout << "Pair 2 is: " << p2.first << " - " << p2.second << endl;
    cout << "Pair 3 is: " << p3.first << " - " << p3.second << endl;
    cout << "Pair 4 is: " << p4.first << " - " << p4.second << endl;
    */

    return 0;
}


/*int main(int argc, char* argv[])
{
    std::cout << "Hello" << std::endl;
    return 0;
}*/
