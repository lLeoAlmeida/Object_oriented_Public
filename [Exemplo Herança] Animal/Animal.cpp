#include "Animal.h"
#include <iostream>

using namespace std;

Animal::Animal(string nome, int idade) {
    this->nome = nome;
    this->idade = idade;

}

void Animal::comer() {
    cout << nome << " esta comendo." << endl;
}

void Animal::dormir() {
    cout << nome << " esta dormindo." << endl;
}
