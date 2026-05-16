#include <stdio.h>
#include <stdlib.h>

int *premiados(int n, int *inscr, float *t1, int p1, float *t2, int p2, int *tam){
    float medias[n];    //Vetor com todas as médias.
    int *maiores;   //Vetor com as maiores médias.
    for (int i=0; i<n; i++){
        float media = ((t1[i]*p1)+(t2[i]*p2))/(p1+p2);  //Calculo da média ponderada.
        medias[i] = media;
    }
    float maior = 0.0;
    int cont=0, *inscr_maior;
    for (int i=0; i<n; i++){
        if (medias[i]>maior){   //Caso a média do índice for maior que a variável maior...
            cont = 1;   //...o contador de maiores médias volta a ser 1...
            maior = medias[i];  //... e a variável maior recebe a média que é agora a maior.
        }else if (medias[i]==maior){
            cont++; //Caso a média seja igual ao atual valor da variável maior, o contador incrementa 1.
        }
    }
    *tam = cont;    //O ponteiro tam vai apontar para o valor de cont.
    inscr_maior = (int*)malloc(cont*sizeof(int));   //Alocação dinâmica do vetor com as inscrições das maiores médias.
    if (inscr_maior==NULL){
        return NULL;    //Caso não seja possível retorna NULL.
    }
    cont = 0;   //Zera cont novamente.
    for (int i=0; i<n; i++){    //Percorre todas as médias.
        if (medias[i]==maior){  //Caso a média do índice atual seja igual a maior média já registrada...
            inscr_maior[cont] = inscr[i];   //... o índice atual do vetor de inscrições recebe esse valor em seu atual índice,...
            cont++; ///... e ao incrementar 1 ao contador, pula para a próxima posição desse vetor.
        }
    }
    return inscr_maior;
}

int main(void){
    int n, *inscr, p1, p2, tam;
    float *t1, *t2;
    printf("Quantidade de participantes: ");
    scanf("%d", &n);
    inscr = (int*)malloc(n*sizeof(int));    //Alocação dinâmica para o vetor das inscrições.
    t1 = (float*)malloc(n*sizeof(float));   //Alocação dinâmica para o vetor das notas do teste 1.
    t2 = (float*)malloc(n*sizeof(float));   //Alocação dinâmica para o vetor das notas do teste 2.
    for (int i=0; i<n; i++){
        //Leitura de cada elemento para cada aluno, mantendo um mesmo índice.
        printf("Participante %d:\n", i+1);
        printf("Inscrição: "); 
        scanf("%d", &inscr[i]);
        printf("Nota do teste 1: "); 
        scanf("%f", &t1[i]);
        printf("Nota do teste 2: "); 
        scanf("%f", &t2[i]);
    }
    printf("Pesos do teste 1 e 2 respectivamente: ");
    scanf("%d %d", &p1, &p2);
    int *inscr_prem = premiados(n, inscr, t1, p1, t2, p2, &tam);    //Vetor que recebe a função com as inscrições dos premiados.
    printf("Inscrição(ões) premiada(s):");
    for (int i=0; i<tam; i++){
        printf(" %d", inscr_prem[i]);   //Print de cada inscrição premiada.
    }
    //Liberando os espaços de memória de cada vetor.
    free(inscr);
    free(t1);
    free(t2);
    free(inscr_prem);
    return 0;
}
