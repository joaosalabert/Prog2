#include <stdio.h>

int total_de_notas(int valor){
    int n100, n50, n20, n10, n5, n2, n1;    //Inicializando as notas
    n100 = valor/100;   //Quantidade de notas de R$100
    valor %= 100;
    n50 = valor/50; //Quantidade de notas de R$50
    valor %= 50;
    n20 = valor/20; //Quantidade de notas de R$20
    valor %= 20;
    n10 = valor/10; //Quantidade de notas de R$10
    valor %= 10;
    n5 = valor/5;   //Quantidade de notas de R$5
    valor %= 5;
    n2 = valor/2;   //Quantidade de notas de R$2
    n1 = valor%2;   //Quantidade de notas de R$1
    printf("%d nota(s) de R$100\n%d notas(s) de R$50\n%d nota(s) de R$20\n%d nota(s) de R$10\n%d nota(s) de R$5\n%d nota(s) de R$2\n%d nota(s) de R$1", n100, n50, n20, n10, n5, n2, n1);
}

int main(void){
    int valor;
    printf("Informe o valor: R$");
    scanf("%d", &valor);
    total_de_notas(valor);
    return 0;
}
