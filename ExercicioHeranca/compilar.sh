#!/bin/bash
source ./compilar.sh
cd Funcionario-cpp/
g++ -c *.cpp 
cd ..
cd TiposDeFuncionarios-cpp
g++ -c *.cpp 
cd ..
g++ principal\\main.cpp Funcionario-cpp\\*.o TiposDeFuncionarios-cpp\\*.o 
