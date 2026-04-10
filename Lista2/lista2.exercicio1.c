#include <stdio.h>

int numPrimo(int n){
    int cont = 0;   //Varíavel que confirma se é ou não primo.
    if(n==1){   //Sem essa condição 1 não seria considerado primo por esse código.
        printf("NUMERO PRIMO\n");
    }else{
        for (int i = 1; i<=n; i++){ //Percorre todos os números até o indicado pelo usuário.
            if(n%i==0){
                cont += 1;  //Caso o número seja divisor acrescenta 1 ao contador.
            }
        }
        if(cont==2){    //Verifica se o número só é divisível por 1 e por ele mesmo.
            printf("NUMERO PRIMO\n");
        }else{
            printf("NUMERO NAO PRIMO\n");
        }
    }  
}

int main(void){
    int n;
    printf("Informe o número para análise: ");
    scanf("%d", &n);    //Recebendo o número a ser analisado.
    numPrimo(n);    //Ativando a função que identifica se é primo.
    return 0;
}
