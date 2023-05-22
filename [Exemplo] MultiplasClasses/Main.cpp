#include <iostream>
#include "Produto.h"
#include "Carrinho.h"

int main() {
    // Criação de objetos Produto

    Produto* produto1 = new Produto("Camiseta", 49.90);
    Produto* produto2 = new Produto("Calca Jeans", 99.90);
    Produto* produto3 = new Produto("Tenis", 199.90);


    // Criação do objeto Carrinho
    Carrinho carrinho;

    // Adição dos produtos ao carrinho
    carrinho.adicionarProduto(produto1);
    carrinho.adicionarProduto(produto2);
    carrinho.adicionarProduto(produto3);

    // Listagem dos produtos no carrinho
    carrinho.listarProdutos();

    // Liberação da memória dos objetos Produto
    delete produto1;
    delete produto2;
    delete produto3;

    system("pause");

    return 0;
}
