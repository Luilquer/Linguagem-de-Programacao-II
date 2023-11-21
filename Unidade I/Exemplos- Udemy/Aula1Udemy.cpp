#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>

    using namespace std;

    int main()
    {

        int matriz[2][2];
        int i, j;

        for(i = 0; i< 2; i++)
        {
            for(j = 0; j< 2; j++)
            {
                cin>> matriz[i][j];
            }
        }

        for(i = 0; i < 2; i++)
        {
            for(j = 0; j < 2; j++)
            {
                cout << matriz[i][j] * 9 << " ";
            }

            cout<< "\n";
        }



        return 0;
    }
