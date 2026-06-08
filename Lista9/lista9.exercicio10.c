#include <stdio.h>
#define MAX 10

struct aluno{
    char nome[81];
    float media;
};

void le(struct aluno *turma){
    for (int i=0; i<MAX; i++){
        printf("Aluno %d\n", i);
        gets(turma[i].nome);
        printf("Média: ");
        scanf("%f", &turma[i].media);
        getchar();
    }
}

void ordena(struct aluno *turma){
    struct aluno a;
    int foraOrdem;
    do{
        foraOrdem = 0;
        for (int i=0; i<MAX-1; i++){
            if (turma[i].media>turma[i+1].media){
                a = turma[i];  
                turma[i] = turma[i+1];
                turma[i+1] = a;
                foraOrdem = 1;
            }
        }
    } while (foraOrdem);   
}

void imprime(struct aluno *turma){
    for (int i=0; i<MAX; i++){
        printf("Aluno %i: %s, média %.2f.\n", i, turma[i].nome, turma[i].media);
    }
}

int main (void){ 
    struct aluno turma[MAX]; 
    le(turma);
    puts("Imprimindo dados lidos da turma."); 
    puts("Digite qualquer coisa para continuar."); 
    getchar(); 
    imprime (turma); 
    ordena_medias(turma); 
    puts("Imprimindo dados ordenados da turma."); 
    puts("Digite qualquer coisa para continuar."); 
    getchar(); 
    imprime(turma); 
    getchar(); 
    return 0;
} 
