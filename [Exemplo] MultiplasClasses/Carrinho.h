#ifndef CARRINHO_H
#define CARRINHO_H

#include "Produto.h"


class Carrinho {
private:
    Produto* produtos[10];
    int quantidade;
public:
    Carrinho();
    void adicionarProduto(Produto* produto);
    void listarProdutos() const;
};

#endif
