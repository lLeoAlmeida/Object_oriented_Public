#include "Cachorro.h"
#include <iostream>

using namespace std;

Cachorro::Cachorro(string nome, int idade) : Animal(nome, idade) {
    this->idade = idade;
    this->nome = nome;
}

void Cachorro::latir() {
    cout << nome << " esta latindo: Au Au!" << endl;
}
