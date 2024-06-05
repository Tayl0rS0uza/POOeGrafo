#ifndef VEICULOS_HPP
#define VEICULOS_HPP
#include <string>

class Veiculo 
{
    protected:
        std::string marca;
        std::string modelo;
        int capacidade; // Capacidade de carga em toneladas

    public:
        Veiculo(const std::string& marca, const std::string& modelo, int capacidade);
        virtual void exibirDados() const;
};


class Caminhao : public Veiculo 
{
    private:
        int eixos;

    public:
        Caminhao(const std::string& marca, const std::string& modelo, int capacidade, int eixos);
        void exibirDados() const override;
};


class Van : public Veiculo 
{
    private:
        int passageiros;

    public:
        Van(const std::string& marca, const std::string& modelo, int capacidade, int passageiros);
        void exibirDados() const override;
};

#endif