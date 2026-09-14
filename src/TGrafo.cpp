#include <iostream>
#include "../include/TGrafo.h"

/*
    Construtor do TGrafo, responsável por 
    Criar a matriz de adjacência v x v do Grafo
*/
TGrafo::TGrafo( int n ){
    this->n = n;

    // No início dos tempos não há arestas
    this->m = 0; 

    // aloca da matriz do TGrafo
    int **adjac = new int*[n];

    for(int i = 0; i < n; i++)
        adjac[i]= new int[n];

    adj = adjac;

    // Inicia a matriz com zeros
    for(int i = 0; i< n; i++)
        for(int j = 0; j< n; j++)
            adj[i][j]=0;    
}

/*
    Destructor, responsável por
    liberar a memória alocada para a matriz
*/
TGrafo::~TGrafo(){
    n = 0;
    m = 0;

    delete [] *adj;

    std::cout << "espaco liberado" << std::endl;
}

/*
    Insere uma aresta no Grafo tal que
    v é adjacente a w
*/
void TGrafo::insereA( int v, int w){
    // testa se nao temos a aresta
    if(adj[v][w] == 0){
        adj[v][w] = 1;
        m++; // atualiza qtd arestas
    }
}

/*
    remove uma aresta v->w do Grafo
*/
void TGrafo::removeA(int v, int w){
    // testa se temos a aresta
    if(adj[v][w] == 1){
        adj[v][w] = 0;
        m--; // atualiza qtd arestas
    }
}

/*
    Apresenta o Grafo contendo
    número de vértices, arestas
    e a matriz de adjacência obtida
*/
void TGrafo::show_(){
    std::cout << "n: " << n << std::endl;
    std::cout << "m: " << m << std::endl;

    for (int i=0; i < n; i++){
        std::cout << "\n";

        for (int w=0; w < n; w++)
            if (adj[i][w] == 1)
                std::cout << "Adj[" << i<< "," << w << "]= 1" << " ";
            else
                std::cout << "Adj[" << i<< "," << w << "]= 0" << " ";
    }
    std::cout << "\nfim da impressao do grafo." << std::endl;
}

/*
    Apresenta a matriz de adjacencia em formato tabular
*/
void TGrafo::show(){
    std::cout << "   ";

    for(int w = 0; w < n; w++){
        if(w > 0)
            std::cout << " ";
        std::cout << w;
    }

    std::cout << std::endl;

    for(int i = 0; i < n; i++){
        std::cout << i << " [";

        for(int w = 0; w < n; w++){
            if(w > 0)
                std::cout << " ";
            std::cout << adj[i][w];
        }

        std::cout << "]" << std::endl;
    }
}

