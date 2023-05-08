#include <iostream>
#include "SistemaParque.h"

using namespace std;
using namespace sp;

SistemaParque::SistemaParque()
{
        qntdFast = 0;
        qntdNormal = 0;

        totalNormal = 0;
        totalFast = 0;
}

void SistemaParque::entradaNormal()
{
     qntdNormal++;
     totalNormal += 150;
}

void SistemaParque::entradaFastPass()
{
    qntdFast++;
    totalFast += 450;
}

void SistemaParque::display()
{
    cout << "Sistema do Parque" << endl << endl;
    cout << "Quantidade Total de Ingressos: " << qntdNormal+qntdFast << endl;
    cout << "Quantidade Total de Ingressos Normais:  " << qntdNormal << endl;
    cout << "Quantidade Total de Ingressos FastPass: " << qntdFast << endl;
    cout << "---------------------------------------" << endl;

    cout << "Valor Total dos Ingressos: R$" << totalNormal+totalFast << endl;
    cout << "Valor Total recadado dos Ingressos Normais:  R$" << totalNormal << endl;
    cout << "Valor Total recadado dos Ingressos FastPass: R$" << totalFast << endl;
}

