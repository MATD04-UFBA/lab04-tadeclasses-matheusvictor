/* Classe Vetor Dinamico */ 

#include<iostream>

#include "tadVetorDin.h"

// ******************************************************
// ***
// ******************************************************
tadVetorDin::tadVetorDin() {
    std::cout<< "Construtor da classe foi invocado" << std::endl;

    // inicializa o vetor com os seguintes valores de atributos:
    tamanhoMaximo = MAX;
    numeroElementos = 0;

}

tadVetorDin::tadVetorDin(int n, int val) {
    std::cout<< "Construtor da classe com valor inicial foi invocado" << std::endl;

    if (n > MAX) {
        this->tamanhoMaximo = MAX;
    } else {
        tamanhoMaximo = n;
    }

    numeroElementos = 0;

    for (unsigned int i = 0; i < tamanhoMaximo; i++) {
        v[numeroElementos++] = val;
    }

}

tadVetorDin::~tadVetorDin() {
    std::cout<< "Destrutor da classe foi invocado" << std::endl;
}

int tadVetorDin::obterTamanhoMaximo() {
    return tamanhoMaximo;
}

int tadVetorDin::obterNumeroElementos() {
    return numeroElementos;
}

void tadVetorDin::imprimirVetor() {
    for (unsigned int i = 0; i < this->numeroElementos; i++) {
        std::cout << v[i] << std::endl;
    }
}
