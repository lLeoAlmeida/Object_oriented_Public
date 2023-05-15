#include <iostream>
#include "Paciente.h"

using namespace std;
using namespace pac;

int main()
{
    Paciente P1;
    P1.SetNome("Jorge");
    P1.SetAltura(1.75);
    P1.SetPeso(70.5);
    P1.CalcularIMC();
    P1.ClassificarIMC();

    system("pause");
    return 0;
}