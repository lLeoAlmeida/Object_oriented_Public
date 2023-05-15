#include <iostream>
#include "Paciente.h"

using namespace std;
using namespace pac;

Paciente::Paciente()
{
    this->Nome = "";
    this->Peso = 0;
    this->Altura = 0;
}
void Paciente::SetNome(string n)
{
    Nome = n;
}
string Paciente::GetNome()
{
    return Nome;
}
void Paciente::SetPeso(double p)
{
    Peso = p;
}
double Paciente::GetPeso()
{
    return Peso;
}
void Paciente::SetAltura(double a)
{
    Altura = a;
}
double Paciente::GetAltura()
{
    return Altura;
}
void Paciente::CalcularIMC()
{
    cout << "Paciente: " << Nome << " possui atualmente o IMC de: " << Peso / (Altura * Altura)<<endl;
}
void Paciente::ClassificarIMC()
{
    double imc;
    imc = Peso / (Altura * Altura);
    if (imc <= 16.5)
    {
        cout << "Paciente: " << Nome << " com o IMC de: " << imc << " esta classificado na categoria: Peso severamente abaixo do normal"<<endl;
    }
    else if (imc <= 18.5 && imc > 16.5)
    {
        cout << "Paciente: " << Nome << " com o IMC de: " << imc << " esta classificado na categoria: Peso abaixo do normal"<<endl;
    }
    else if (imc <= 24.99 && imc > 18.5)
    {
        cout << "Paciente: " << Nome << " com o IMC de: " << imc << " esta classificado na categoria: Normal"<<endl;
    }
    else if (imc <= 29.99 && imc > 24.99)
    {
        cout << "Paciente: " << Nome << " com o IMC de: " << imc << " esta classificado na categoria: Pre-Obeso"<<endl;
    }
    else if (imc <= 34.99 && imc > 29.99)
    {
        cout << "Paciente: " << Nome << " com o IMC de: " << imc << " esta classificado na categoria: Obesidade Classe I"<<endl;
    }
    else if (imc <= 39.99 && imc > 34.99)
    {
        cout << "Paciente: " << Nome << ", com o IMC de: " << imc << " esta classificado na categoria: Obesidade Classe II"<<endl;
    }
    else if (imc > 40)
    {
        cout << "Paciente: " << Nome << ", com o IMC de: " << imc << " esta classificado na categoria: Obesidade Classe III"<<endl;
    }
}