#include "Grafo.hpp"

using std::cout;
using std::endl;
using std::vector;

int main(){

    Grafo GrafoDeTeste(10);

    GrafoDeTeste.addAresta(1, 3);
    GrafoDeTeste.addAresta(6, 2);
    GrafoDeTeste.addAresta(1, 7);
    GrafoDeTeste.addAresta(4, 5);
    GrafoDeTeste.addAresta(1, 3);
    GrafoDeTeste.addAresta(8, 4);
    GrafoDeTeste.addAresta(2, 9);
    GrafoDeTeste.addAresta(1, 4);
    GrafoDeTeste.addAresta(5, 2);
    GrafoDeTeste.addAresta(7, 5);

    cout << endl;
    cout << "Verificando vizinhanca:" << endl;
    cout << "4 e 2 sao vizinhos? " << (GrafoDeTeste.verificaVizinhos(2, 4) ? "Sao vizinhos" : "Nao sao vizinhos") << endl;
    cout << "7 e 3 sao vizinhos? " << (GrafoDeTeste.verificaVizinhos(7, 3) ? "Sao vizinhos" : "Nao sao vizinhos") << endl;
    cout << "5 e 4 sao vizinhos? " << (GrafoDeTeste.verificaVizinhos(5, 4) ? "Sao vizinhos" : "Nao sao vizinhos") << endl;
    cout << "1 e 8 sao vizinhos? " << (GrafoDeTeste.verificaVizinhos(1, 8) ? "Sao vizinhos" : "Nao sao vizinhos") << endl;
    cout << endl;


    cout << "Estes sao os vizinhos do vertice 5: " << endl;
    vector<int> vizinhos = GrafoDeTeste.obtemVizinhos(5);
    for (int vertice : vizinhos) {
        cout << vertice << " ";
    }
    cout << endl << endl;


    cout << "Matriz de Adjacencia: " << endl;
    GrafoDeTeste.imprimirMatriz();
    cout << endl;


    return 0;
}
