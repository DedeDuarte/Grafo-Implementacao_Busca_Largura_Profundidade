/*
Implementação de uma Classe para grafos denominada TGrafo,
usando Matriz de Adjacência
e métodos para utilização de um grafo dirigido.
*/
#ifndef ___GRAFO_MATRIZ_ADJACENCIA___

#define ___GRAFO_MATRIZ_ADJACENCIA___

// definição de uma estrutura para armezanar um grafo
// Também seria possível criar um arquivo grafo.h 
// e fazer a inclusão "#include <grafo.h>"
class TGrafo{
	private:
		int n; // quantidade de vértices
		int m; // quantidade de arestas
		int **adj; //matriz de adjacência
	public:
		TGrafo( int n);
		void insereA(int v, int w);
		void removeA(int v, int w);
		void show();
		~TGrafo();		
};

#endif
