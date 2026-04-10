#include <stdio.h>

int soma(int n){
    int sum = 0;    //Variável que guarda a soma dos números ímpares.
    int cont = 0;   //Variável que conta quantos números ímpares já foram somados.
    for (int i=0; cont<n; i++){
        printf("%d ", i);   //Printando cada número para melhor visualização do processo.
        if(i%2!=0){
            sum += i;
            cont += 1;
        }
    }
    printf("\nA soma dos números ímpares é: %d", sum);  //Resultado final da soma de n números ímpares.
}

int main(void){
    int n;
    printf("Quantos números ímpares você quer somar? ");
    scanf("%d", &n);    //Recebendo quantos números ímpares serão somados.
    soma(n);    //Ativando a função que soma essa quantidade de números ímpares.
    return 0;
}
