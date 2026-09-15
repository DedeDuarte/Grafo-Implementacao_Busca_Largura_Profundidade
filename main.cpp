/**
 * Implementação:
 * Busca em Largura e Profundidade (Grupo do Projeto)
 * 
 * Integrantes:
 * |=================================|==========|
 * |               Nome              |    RA    |
 * |---------------------------------|----------|
 * | André Doerner Duarte            | 10427938 |
 * | Matheus Leonardo Cardoso Kroeff | 10426434 |
 * | Naoto Ushizaki                  | 10437445 |
 * |=================================|==========|
 */

#include "include/TGrafo.hpp"
#include "include/utils.hpp"

int main() {
    // Crinado grafos
    TGrafo g1(8);
    TGrafo g2(4);

    preencher_grafos(g1, g2);

    // Conferindo grafos
    g1.show();
    g2.show();

    // Busca em profundidade
    std::vector<int> visitados_g1_p = g1.busca_profundidade(0);
    std::vector<int> visitados_g2_p = g2.busca_profundidade(0);

    print_vector_int(visitados_g1_p);
    print_vector_int(visitados_g2_p);

    // Busca em largura
    std::vector<int> visitados_g1_l = g1.busca_largura(0);
    std::vector<int> visitados_g2_l = g2.busca_largura(0);

    print_vector_int(visitados_g1_l);
    print_vector_int(visitados_g2_l);

    return 0;
}
