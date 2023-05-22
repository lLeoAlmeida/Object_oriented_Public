#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>
using namespace std;

class Produto {
private:
    string Nome;
    float Preco;
public:
    Produto(string n, float p);
    string getNome() const;
    float getPreco() const;
};

#endif
    