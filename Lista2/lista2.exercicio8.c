#include <stdio.h>

int main(void){
    for (int i=1000; i<10000; i++){ //Loop que percorre todos os números inteiros de 4 algarismos.
        int parte1, parte2, soma;
        parte1 = i/100; //Faz com que o número seja dividido dem duas partes e pega a primeira.
        parte2 = i%100; //Pega a seguunda parte do número.
        soma = parte1+parte2;   //Soma o número que será elevado ao quadrado.
        if((soma*soma)==i){
            printf("%d ", i);   //Caso o calculo da expressão seja verdadeiro, printa o número.
        } 
    }
    return 0;
}
