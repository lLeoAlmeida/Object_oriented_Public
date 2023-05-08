#include <iostream>
#include "SistemaParque.h"

using namespace std;
using namespace sp;

int main() {
    SistemaParque info;
    char key;
     cout << "Aperte 'n' para adicionar a entrada de um ingresso normal, aperte 'f' para adicionar a entrada de um ingresso FastPass, ou 'x' para sair" << endl;
        cout << "----------------------------------------------------------------------------------------------------------------------------------------" << endl;
    do {
       
        key = getchar();
        if (key == 'n') {
            info.entradaNormal();
            cout << endl << "Ingresso normal Contabilizado" << endl << endl;
        } else if (key == 'f') {
            info.entradaFastPass();
            cout << endl << "Ingresso FastPass Contabilizado" << endl << endl;
        } 
        
    } while (key != 'x');

    info.display();
    system("pause");
    return 0;
}