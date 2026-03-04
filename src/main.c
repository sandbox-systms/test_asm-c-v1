#include <stdio.h>

extern int add(int a, int b);

int main() {
    int result = add(10, 20);
    printf("Result is %d\n", result);
    return 0; 
}

/* Notas; o programa acima é um exemplo simples de um programa em C que chama uma função `add` definida em outro arquivo.
A função `add` deve ser implementada em um arquivo separado
por exemplo, `add.c`, e deve ser compilada junto com este arquivo para criar o executável final.*/