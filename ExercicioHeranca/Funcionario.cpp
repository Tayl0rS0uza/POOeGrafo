#include "Funcionario.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

Funcionario::Funcionario(const string& nome, int id, double salarioBase) : nome(nome), id(id), salarioBase(salarioBase) {}

double Funcionario::calcularSalarioTotal() const {
    return salarioBase;
}

void Funcionario::mostrarInformacoes() const {
    cout << "Nome: " << nome << ", ID: " << id << ", Salario Base: " << salarioBase << endl;
}


