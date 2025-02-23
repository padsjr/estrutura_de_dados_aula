#include <stdio.h>
#define I 25/*para garantir menor uso de memoria melhor usar o define, os valores são substituídos diretamente no código sem armazenar variáveis na RAM*/
#define J 80

int main() {

    /*
    const int I = 25;
    const int J = 80;
    Dessa forma segue as boas praticas e teria mais segurança
    */
    int resultado = I*J;

    printf("O valor de I é : %d\n", I);
    printf("O valor de J é : %d\n", J);
    printf("O resultado da multiplicacao de J por I é : %d\n", resultado);


    
    return 0;
} 