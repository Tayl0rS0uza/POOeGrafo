#include "TiposDeFuncionarios.hpp"
#include <iostream>

using std::cout;
using std::endl;

int main(){

    FuncionarioRegular funcionario("Eduardo", 2, 1700.00);
    funcionario.mostrarInformacoes();

    Gerente gerente("Giovanna", 1, 5500.00, 2000.00);
    gerente.mostrarInformacoes();

    Estagiario estagiario("Enzo", 3, 1000.00);
    estagiario.mostrarInformacoes();

    return 0;
}
