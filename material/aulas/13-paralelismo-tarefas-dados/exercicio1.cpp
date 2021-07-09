#include "imagem.hpp"
#include <iostream>
#include <random>

int main(int argc, char *argv[]) {
    Imagem input = Imagem::read(std::string(argv[1]));
    Imagem output(input.rows, input.cols);

    // adicionar ruido aqui

    return 0;
}