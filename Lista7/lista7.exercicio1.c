#include <stdio.h>

int main(void){
    printf("f1 = 2\n"); //v ainda é 1 na main, mas o output é 2 na função.
    printf("f2 = 2\n"); //v é passado por referência então muda para 2 na main também  eo output é 2 pela função.
    printf("f3 = 3\n"); //v fica 3 na função, que tem output 3.
    printf("main = 3\n");   //f3 retorna 3, que é recebido poor v na main, que tem output 3 também.
    return 0;
}
