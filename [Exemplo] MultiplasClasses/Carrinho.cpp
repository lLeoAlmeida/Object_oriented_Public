#include <iostream>
#include "Carrinho.h"

using namespace std;

Carrinho::Carrinho() {
    quantidade = 0;
    for (int i = 0; i < 10; i++) {
        produtos[i] = nullptr;
    }
}

void Carrinho::adicionarProduto(Produto* produto) {
    if (quantidade < 10) {
        produtos[quantidade] = produto;
        quantidade++;
        cout << "Produto adicionado ao carrinho." << endl;
    } else {
        cout << "Carrinho cheio. Não é possível adicionar mais produtos." << endl;
    }
}

void Carrinho::listarProdutos() const {
    if (quantidade > 0) {
        cout << "Produtos no carrinho:" << std::endl;
        for (int i = 0; i < quantidade; i++) {
            cout << "Produto " << i + 1 << ": " << produtos[i]->getNome() << " - Preco: R$" << produtos[i]->getPreco() << endl;
        }
    } else {
        cout << "Nenhum produto no carrinho." << endl;
    }
}
