# Busca em largura e profundidade

Este projeto implementa um grafo dirigido usando uma matriz de adjacência. A classe `TGrafo` permite inserir e remover arestas, mostrar a matriz do grafo e percorrê-lo usando busca em profundidade e busca em largura.

## Como executar

É necessário ter o `g++` e o `make` instalados. Para compilar e executar o programa, use:

```bash
make run
```

O `makefile` compila o projeto usando C++17, executa o arquivo gerado e depois remove o executável. Também é possível apenas compilar:

```bash
make
```

Para remover o executável manualmente:

```bash
make clean
```

## Implementação das buscas

A busca em profundidade (`busca_profundidade`) utiliza uma pilha. Ela começa pelo vértice informado, visita um vizinho ainda não visitado e continua avançando pelo grafo. A pilha guarda os vértices necessários para continuar o percurso quando um caminho termina.

A busca em largura (`busca_largura`) utiliza uma fila. O vértice inicial é visitado primeiro e seus vizinhos são colocados na fila. Depois, cada vértice é retirado da fila e seus vizinhos ainda não visitados são adicionados ao final dela.

Nas duas buscas, um `vector<int>` guarda os vértices visitados, evita visitas repetidas e é retornado com a ordem do percurso.

## Testes

O `main.cpp` cria dois grafos dirigidos: um com 8 vértices e outro com 4. As arestas são adicionadas pela função `preencher_grafos` e as matrizes de adjacência são impressas para conferir sua estrutura.

Em seguida, as buscas em profundidade e em largura são executadas nos dois grafos a partir do vértice `0`. Os vetores retornados são impressos para mostrar a ordem em que os vértices foram visitados.
