#include "Veiculos.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;


Veiculo::Veiculo(const string& marca, const string& modelo, int capacidade) : marca(marca), modelo(modelo), capacidade(capacidade) {}

void Veiculo::exibirDados() const{
    cout << "Marca: " << marca << ", Modelo: " << modelo << ", Capacidade: " << capacidade << " toneladas" << endl;
}


Caminhao::Caminhao(const string& marca, const string& modelo, int capacidade, int eixos) : Veiculo(marca, modelo, capacidade), eixos(eixos) {}

void Caminhao::exibirDados() const{
    cout << "Caminhao - ";
    Veiculo::exibirDados();
    cout << "Eixos: " << eixos << endl;
}


Van::Van(const string& marca, const string& modelo, int capacidade, int passageiros) : Veiculo(marca, modelo, capacidade), passageiros(passageiros) {}

void Van::exibirDados() const{
    cout << "Van - ";
    Veiculo::exibirDados();
    cout << "Passageiros: " << passageiros << endl;
}