#include <stdio.h>

void ler_valores(int v[7]){
    printf("FUNÇÃ0 PARA LER VALORES\n\n");
    for (int i=0; i<7; i++){
        printf("Informe o %dº número do vetor: ", i+1); 
        scanf("%d", &v[i]);
    } 
}

int listar(int v[7]){
    printf("\nFUNÇÃO PARA LISTAR VALORES E PESQUISAR VALOR\n\n");
    int x;
    printf("Qual número quer pesquisar: ");
    scanf("%d", &x);
    for(int i=0; i<7; i++){
        printf("Valor %d: %d\n", i, v[i]);  //Print para cada valor do vetor.
    }
    for (int i=0; i<7; i++){
        if (v[i]==x){   //Confere se o valor pesquisado está na lista.
            return i;
        }
    }
    return -1;
}

void trocas(int v[7]){
    printf("\nFUNÇÃO PARA TROCAR O ELEMENTO PELA SOMA DOS ANTERIORES\n\n");
    printf("Vetor inicial:");
    for (int i=0; i<7; i++){
        printf(" %d", v[i]);    //Print em cada elemento do vetor inicial.
    }
    int va[7], sum=v[0];
    va[0] = v[0];   //Vetor auxiliar recebe a primeira.
    for (int i=1; i<7; i++){
        sum += v[i];    //Variável da soma adiciona o valor atual.
        va[i] = sum;    //Vetor auxiliar recebe o atual valor da soma.
        v[i] = va[i];   //Elemento atual é copiado do vetor auxiliar para o vetor inicial.
    }
    printf("\nVetor modificado:");
    for (int i=0; i<7; i++){    //Print em cada posição do vetor.
        printf(" %d", va[i]);
    }
}

int main(void){
    int v[7];
    ler_valores(v);
    int pos = listar(v);
    if (pos==-1){
        printf("O número pesquisado não está no vetor.\n");
    }else{
        printf("A posição do número pesquisado é: %d.\n", pos);
    }
    trocas(v);
    return 0;
}
