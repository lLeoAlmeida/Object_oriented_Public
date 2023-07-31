#include "Animal.h"
#include "Gato.h"
#include "Cachorro.h"

int main() {
    Gato gato("Mochi", 6);
    Cachorro cachorro("Ludoviko", 3);

    gato.comer();
    gato.dormir();
    gato.miar();

    cachorro.comer();
    cachorro.dormir();
    cachorro.latir();

    return 0;
}
