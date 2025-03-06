#include <stdio.h>
/*Foram vistos os tipos homogêneos. Não poderíamos armazenar tipos diferentes no vetor? Porque?

Faça um programa que contenha um vetor de 10 elementos inteiros. Atribua os valores 2, 4, 6, 9, 10, 12, 14, 16, 18, 20.
*/
int main(){

    int vetor[10] ={2, 4, 6, 9, 10, 12, 14, 16, 18, 20} ;
    /*Imprima o endereço de memória em que o vetor foi alocado usando representação hexadecimal.*/
    printf("O endereco do vetor eh %p", &vetor);

    for(int i = 0;i<11; i++){
        printf("O endereco do vetor eh %p\n", &vetor);
        printf("O endereco do elemento %d dentrodo vetor eh [%p]\n", i, &vetor[i]);
    }

    return 0;
}
/*

Você consegue identificar em que posição de memória o vetor foi alocado?

Então faça:

Depois de imprimir o endereço do vetor, imprima o endereço de cada elemento da seguinte forma:

valor [endereço]

Exemplo:   30 [6F1240AB]

Que característica você pode observar nestes endereços?
*/
