/**
 * Implementação:
 * Busca em Largura e Profundidade (Grupo do Projeto)
 * 
 * Integrantes:
 * |======================|==========|
 * |         Nome         |    RA    |
 * |----------------------|----------|
 * | André Doerner Duarte | 10427938 |
 * |======================|==========|
 */

#include <iostream>
#include "include/TGrafo.h"

void preencher_grafos(TGrafo& g1, TGrafo& g2) {
    // Criando vertices para G1
    g1.insereA(0, 1);
    g1.insereA(0, 2);
    g1.insereA(0, 4);
    g1.insereA(1, 3);
    g1.insereA(1, 4);
    g1.insereA(2, 5);
    g1.insereA(2, 6);
    g1.insereA(3, 7);
    g1.insereA(4, 7);
    g1.insereA(5, 4);
    g1.insereA(5, 6); // Six Seven hehe
    g1.insereA(6, 7);

    g2.insereA(0, 1);
    g2.insereA(0, 2);
    g2.insereA(1, 0);
    g2.insereA(1, 3);
    g2.insereA(2, 0);
    g2.insereA(2, 3);
    g2.insereA(3, 1);
    g2.insereA(3, 2);
}

void print_vector_int(std::vector<int> v) {
    std::cout << "[";

    int i;
    for (i = 0; i < (int)v.size()-1; i++)
        std::cout << v[i] << ", ";

    std::cout << v[i] << "]" << std::endl;
}

int main() {
    // Crinado grafos
    TGrafo g1(8);
    TGrafo g2(4);

    preencher_grafos(g1, g2);

    // Conferindo grafos
    g1.show();
    g2.show();

    std::vector<int> visitados = g1.busca_profundidade(0);

    print_vector_int(visitados);

    return 0;
}
