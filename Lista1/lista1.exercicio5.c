#include <stdio.h>

float pos1(){   //Função para calcular a primeira possibilidade
    int a;
    float b, c;
    a = 3;
    b = a/2.0;
    c = b+3.1;
    printf("%.1f\n", c);
}

float pos2(){   //Função para calcular a segunda possibilidade
    int a, b;
    float c;
    a = 3;
    b = a/2;
    c = b+3.1;
    printf("%.1f\n", c);
}

float pos3(){   //Função para calcular a terceira possibilidade
    int a, b;
    float c;
    a = 3;
    b = a/2;
    c = b+3.1;
    printf("%.0f\n", c);
}

int main(void){
    pos1();
    pos2();
    pos3();
    return 0;
}