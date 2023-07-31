#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal {
protected:
    string nome;
    int idade;

public:
    Animal(string nome, int idade);
    void comer();
    void dormir();
};

#endif 