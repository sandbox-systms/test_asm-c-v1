#include <stdio.h>

extern int soma(int a, int b);

int main() {
    int result = soma(10, 20);
    printf("Result is %d\n", result);
    return 0; 
}

/* Notas; o programa acima é um exemplo simples de um programa em C que chama uma função `soma` definida em outro arquivo.
A função `soma` deve ser implementada em um arquivo separado
por exemplo, `soma.c`, e deve ser compilada junto com este arquivo para criar o executável final.*/