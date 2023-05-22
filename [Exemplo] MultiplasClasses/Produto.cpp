#include "Produto.h"

using namespace std;

Produto::Produto(string n, float p) {
    Nome=n;
    Preco=p;
    
}

string Produto::getNome() const {
    return Nome;
}

float Produto::getPreco() const {
    return Preco;
}
