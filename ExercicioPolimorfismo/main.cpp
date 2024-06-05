#include "Veiculos.hpp"
#include <iostream>
#include <vector>
#include <memory> 

using std::unique_ptr;
using std::vector;
using std::string;
using std::make_unique;
using std::cout;
using std::endl;

int main(){

    //Usei estes ponteiros dinamicos para liberar a memoria
    vector<unique_ptr<Veiculo>> veiculos;

    veiculos.push_back(make_unique<Caminhao>("Volvo", "FH540", 70, 4));
    veiculos.push_back(make_unique<Caminhao>("Scania", "R450", 75, 4));
    veiculos.push_back(make_unique<Caminhao>("DAF", "XF", 91, 6));

    veiculos.push_back(make_unique<Van>("Mercedes", "Sprinter", 3, 21));
    veiculos.push_back(make_unique<Van>("Renault", "Master", 2, 16));
    veiculos.push_back(make_unique<Van>("Volkswagen", "Kombi", 1.5, 12));


    for (const auto& veiculo : veiculos){
        veiculo->exibirDados();
    }


    return 0;
}
