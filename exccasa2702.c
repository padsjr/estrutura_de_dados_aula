#include <stdio.h>
#include <stdlib.h>





/*01 - Construa um programa com duas variáveis, uma inteira e um ponteiro
de inteiro. Atribua valores para as variáveis e imprima na tela os seus
valores e a soma de seus valores. 
int main(){
    int v1 = 1;

    /*
    int *v2= 2;
    exccasa2702.c:6:15: error: initialization of 'int *' from 'int' makes pointer from integer without a cast [-Wint-conversion]
    6 |     int *v2 = 2;
    

    int *v2;
    *v2 = 2;

    int sum = v1 + *v2;

    printf("O valor da soma entre %d e %d é %d", v1, *v2, sum);
    return 0;
}
*/

/*
02 -Construa um programa com duas variáveis inteiras (a, b) e dois
ponteiros de inteiros (p, q). Atribua valores iniciais para eles e imprima
na tela. Faça com que p aponte para a e q aponte para b. Imprima seus
valores na tela.

int main(){
    int a,b,*p,*q;
    a = 1;
    b = 2;
    p = &a;
    q = &b;

    printf("O valor de a é: %d\n O valor de b é: %d\n e o valor dos ponteiros são  p = %d e q = %d", a, b, *p, *q);

    
    
    return 0;

}
*/

/*03- Construa um programa com um vetor previamente inicializado com os
valores 10, 20, 30, 40, 50. Faça uma rotina simples no código que
duplique os valores pares e divida por dois os valores impares,
substituindo-os no vetor. Imprima os valores antes e depois da rotina.

int main(){
    int vetor[] = {10,20,30,40,43};
    for(int i = 0; i < 6; i++){
        if(vetor[i]%2 == 0 ){
            int duplicado = vetor[i]*2;
            printf("O valor do array na posicao %d era %d depois de duplicado ficou %d\n", i , vetor[i] , duplicado);
            vetor[i] = duplicado;
            printf("O novo valor do array na posicao %d eh %d depois de duplicado. \n", i , vetor[i]);
        }else{
            int dividido = vetor[i]/2;
            printf("O valor do array na posicao %d era %d depois de duplicado ficou %d\n", i , vetor[i] , dividido);
            vetor[i] = dividido;
            printf("O novo valor do array na posicao %d eh %d depois de duplicado. \n", i , vetor[i]);
        }
    }

    return 0; 
}
*/

/*04- Faça um programa que utilize 5 números reais (123.25; 3.141592;
1.27; 1.931; 1.010101) e apresente-os da seguinte forma:
• um ao lado do outro, com 4 dígitos antes da vírgula e dois dígitos depois
da vírgula, devem estar distantes uns dos outros por dois espaços e o
último a ser apresentado deve ser a divisão consecutiva desses valores.

int main(){
    double n1 = 123.25;
    double n2 = 3.141592;
    double n3 = 1.27;
    double n4 = 1.931;
    double n5 = 1.010101;

    printf("%7.2lf  %7.2lf  %7.2lf  %7.2lf  %7.2lf  %7.2lf", n1,n2,n3,n4,n5,(n1/n2/n3/n4/n5));
    
    return 0;
}
*/
