#include <stdio.h>
/*1) Como os tipos primitivos se comportam em operações e representações?
    2) Faça um programa que tenha duas variáveis do tipo char. Atribua valores inteiros a ela, tais como 1, 54, 65, 98. A cada atribuição, imprima a variável com printf, ora indicando a variável como inteira (%d), ora indicando como caractere(%c).
O que acontece?
int main(){
    char a = 1;
    char b = 54;
    printf("O valor de a = %d", a);
    printf("O valor de b = %c", b);
    a = 65;
    b = 98;
    printf("O valor de a = %d", a);
    printf("O valor de b = %c", b);


    return 0;
}
    O valor de a = 1O valor de b = 6O valor de a = 65O valor de b = b
*/
int main(){
    char a = 120;
    char b = 280;
    printf("O valor de a = %d", a);
    printf("O valor de b = %c", b);
    a = 65;
    b = 98;
    printf("O valor de a = %d", a);
    printf("O valor de b = %c", b);


    return 0;
}
/*
3) No mesmo programa, atribua para a primeira variável 120 e para a segunda variável 280. Imprima as variáveis da mesma forma de antes.

O que aconteceu? Você consegue explicar a razão disso?

int main(){
    char a = 120;
    char b = 280;
    printf("O valor de a = %d", a);
    printf("O valor de b = %c", b);
    a = 65;
    b = 98;
    printf("O valor de a = %d", a);
    printf("O valor de b = %c", b);


    return 0;
}
    exerciciocasa.c: In function 'main':
exerciciocasa.c:21:14: warning: overflow in conversion from 'in ' to 'char' changes value from '280' to '24' [-Woverflow]
   21 |     char b = 280;
      |              ^~~
      O char só pode ser um valor entre -128 e 127 se for signed e se for unsigned de 0 a 255

*/