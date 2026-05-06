#include <stdio.h>

int main(void){
    //Inicializando o vetor de tamanho par, os ponteiros, e os valores de percorrer o vetor pelos lados;
    int v[4] = {81, 19, 22, 25}, *p1, *p2, i=0, j=3;
    for(i; i<j; i++){   //Começa em i, e execcuta até que i e j se encontrem ou se cruzem no meio.
        p1 = &v[i]; //Aponta *p1 para o elemento i de v.
        p2 = &v[j]; //Aponta *p2 para o elemento j de v.
        printf("i: %d; j: %d; *p1: %d; *p2: %d p1: %d; p2: %d\n", i, j, *p1, *p2, p1, p2);
        j--;    //Decrementa 1 de j para encontrar i no meio.
    } 
    return 0;
}
