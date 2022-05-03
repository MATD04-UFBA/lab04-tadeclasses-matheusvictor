#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "tadVetorDin.h"

// ***********************************************
// ***********************************************
// ***********************************************

int main(int argc, char** argv) {

unsigned int numElementos=MAX;  

	if (argc > 1) {
		numElementos = atoi(argv[1]);
		if (numElementos > MAX)
			numElementos = MAX;
		}

	std::cout << "Numero de elementos do vetor = " << numElementos << std::endl;

	tadVetorDin vetorDinamico;

	std::cout << "Tamanho maximo do vetor = " << vetorDinamico.obterTamanhoMaximo() << std::endl;
	std::cout << "Elementos do vetor = " << vetorDinamico.obterNumeroElementos() << std::endl;

	tadVetorDin segundoVetorDinamico((int)numElementos, -1);
	std::cout << "Tamanho maximo do segundo vetor = " << segundoVetorDinamico.obterTamanhoMaximo() << std::endl;
	std::cout << "Elementos do segundo vetor = " << segundoVetorDinamico.obterNumeroElementos() << std::endl;

	segundoVetorDinamico.imprimirVetor();

	std::cout << "Apos essa linha, o main sera encerrado e o destrutor da classe sera invocado" << std::endl;

}
