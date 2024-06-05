#include "Grafo.hpp"

using std::cout;
using std::vector;
using std::endl;

Grafo::Grafo(int vertices){

    quantVertices = vertices;
    matrizDeAdjacencia.resize(vertices, vector<int>(vertices,0));

}

void Grafo::addAresta(int vertice1, int vertice2){

    matrizDeAdjacencia[vertice1 - 1][vertice2 - 1] = 1;
    matrizDeAdjacencia[vertice2 - 1][vertice1 - 1] = 1;

}

vector<int> Grafo::obtemVizinhos(int vertice){

    vector<int> vizinhos;

    for(int i = 0; i < quantVertices; i++){

        if(matrizDeAdjacencia[vertice - 1][i] == 1){
            vizinhos.push_back(i + 1);
        }
    }

    return vizinhos;
}

bool Grafo::verificaVizinhos(int vertice1, int vertice2){
    return matrizDeAdjacencia[vertice1 - 1][vertice2 - 1] == 1;

}

void Grafo::imprimirMatriz(){

    for(int i = 0; i < quantVertices; i++){
        for(int j = 0; j < quantVertices; j++){

            cout << matrizDeAdjacencia[i][j] << " ";
        }
        cout << endl;
    }
}
