#ifndef CACHORRO_H
#define CACHORRO_H

#include "Animal.h"

using namespace std;

class Cachorro : public Animal {
public:
    Cachorro( string nome, int idade);
    void latir();
};

#endif // CACHORRO_H
