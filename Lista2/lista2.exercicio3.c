#include <stdio.h>

int fib(int n){
    int t1, t2, t3; //Iniciando oos números que serão utilizados na sequência.
    t1 = 0;
    t2 = 1;
    t3 = t1+t2; //Fórmula da Sequência de Fibonacci.
    printf("%d %d", t1, t2);    //Printando os 2 primeiros números para conseguir continuar a sequência sem problemas.
    for (int i=0; i<=(n-2); i++){   //Loop para mostrar e calcular os outros números da sequência.
        printf(" %d", t3);
        t1 = t2;
        t2 = t3;
        t3 = t1+t2;
    }
}

int main(void){
    int n;
    printf("Quantos números da Sequência de Fibonacci você quer? ");
    scanf("%d", &n);    //Recebendo quantos números da sequência serão apresentados.
    fib(n); //Ativando a função que calcula e apresenta os números da sequência.
    return 0;
}
