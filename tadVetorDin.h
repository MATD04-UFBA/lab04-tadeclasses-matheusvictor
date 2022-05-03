/* Classe Vetor Dinamico */ 

#include<iostream>
#include<string>

#define MAX 100

class tadVetorDin {

private:
    int v[MAX]; // vetor alocado estaticamente
    int tamanhoMaximo; // tamanho máximo que o vetor pode alcançar
    int numeroElementos; // números de elementos em um dado momento

public:
    tadVetorDin(); // construtor padrão
    tadVetorDin(int n, int val); // construtor secundário
    ~tadVetorDin();

    int obterTamanhoMaximo();
    int obterNumeroElementos();
    void imprimirVetor();

};
