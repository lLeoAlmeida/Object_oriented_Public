#include "Gato.h"
#include <iostream>

using namespace std;

Gato::Gato(string nome, int idade) : Animal(nome, idade) {

    this->nome = nome;
    this->idade = idade;
}

void Gato::miar() {
    cout << nome << " esta miando: Miau Miau!" << endl;
}
