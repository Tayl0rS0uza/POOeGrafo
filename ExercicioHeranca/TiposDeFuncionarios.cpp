#include "TiposDeFuncionarios.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

FuncionarioRegular::FuncionarioRegular(const string& nome, int id, double salarioBase) : Funcionario(nome, id, salarioBase) {}

double FuncionarioRegular::calcularSalarioTotal() const{
    return salarioBase;
}
void FuncionarioRegular::mostrarInformacoes() const{
    Funcionario::mostrarInformacoes();
    cout << ", Salario Total: " << calcularSalarioTotal() << endl;
}


Gerente::Gerente(const string& nome, int id, double salarioBase, double bonusAnual) : Funcionario(nome, id, salarioBase), bonusAnual(bonusAnual) {}

double Gerente::calcularSalarioTotal() const{
    return salarioBase + bonusAnual;
}

void Gerente::mostrarInformacoes() const{
    Funcionario::mostrarInformacoes();
    cout << ", Bonus Anual: " << bonusAnual << ", Salario Total: " << calcularSalarioTotal() << endl;
}


Estagiario::Estagiario(const string& nome, int id, double salarioBase) : Funcionario(nome, id, salarioBase * 0.8) {}  // Salário fixo menor (80% do salário base)

double Estagiario::calcularSalarioTotal() const{
    return salarioBase;
}

void Estagiario::mostrarInformacoes() const{
    Funcionario::mostrarInformacoes();
    cout << ", Salario Total: " << calcularSalarioTotal() << endl;
}