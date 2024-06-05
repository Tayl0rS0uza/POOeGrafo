#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP
#include <string>

class Funcionario
{    
    protected:
        std::string nome;
        int id;
        double salarioBase;

    public:
        Funcionario(const std::string& nome, int id, double salarioBase);
        virtual double calcularSalarioTotal() const;
        virtual void mostrarInformacoes() const;
        virtual ~Funcionario() {}

};


#endif