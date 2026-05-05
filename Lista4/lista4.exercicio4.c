#include <stdio.h>

int teste_PA(int n, int *v){
    int k=v[1]-v[0];    //Possível razão = k.
    for(int i=0;i<n; i++){
        if(v[i]!=v[0]+(k*i)){   //Se o cálculo der errado, não é uma PA e retorna 0.
            return 0;
        }
    }
    return k;   //Se o cálculo der certo, é uma PA e retorna a razão k.
}

int main(void){
    int n;
    printf("Tamanho do vetor: ");
    scanf("%d", &n);
    int v[n];
    //Captando os valores do vetor.
    for (int i=0; i<n; i++){
        printf("Digite o %dº número do vetor: ", i+1);
        scanf("%d", &v[i]);
    }
    int r = teste_PA(n, v);
    if(r==0){
        printf("O vetor não é uma PA.");    //Caso a função retorne 0.
    }else{
        printf("Valor da razão k: %d", r);  //Caso de fato seja uma PA.
    }
    return 0;
}
