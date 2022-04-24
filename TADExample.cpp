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

}
