#ifndef TIPOSDEFUNCIONARIOS_HPP
#define TIPOSDEFUNCIONARIOS_HPP
#include "Funcionario.hpp"

class FuncionarioRegular : public Funcionario
{
    public:
        FuncionarioRegular(const std::string& nome, int id, double salarioBase);
        double calcularSalarioTotal() const override;
        void mostrarInformacoes() const override;

};


class Gerente : public Funcionario
{
    private:
        double bonusAnual;

    public:
        Gerente(const std::string& nome, int id, double salarioBase, double bonusAnual);
        double calcularSalarioTotal() const override;
        void mostrarInformacoes() const override;

};


class Estagiario : public Funcionario
{
    public:
        Estagiario(const std::string& nome, int id, double salarioBase);
        double calcularSalarioTotal() const override;
        void mostrarInformacoes() const override;

};


#endif