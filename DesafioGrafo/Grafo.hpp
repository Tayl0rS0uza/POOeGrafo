#ifndef GRAFO_HPP
#define GRAFO_HPP

#include <iostream>
#include <vector>


class Grafo{

    private:
        std::vector<std::vector<int>>matrizDeAdjacencia;
        int quantVertices;

    public:
        Grafo(int vertices);
        void addAresta(int vertice1, int vertice2);
        std::vector<int> obtemVizinhos(int vertice);
        bool verificaVizinhos(int vertice1, int vertice2);
        void imprimirMatriz();

};


#endif