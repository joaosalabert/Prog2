#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct data { 
    int dia, mes, ano; 
} Data;

typedef struct local { 
    char ender[81]; /* endereço do local de provas */ 
    int sala; /* numero sala */ 
} Local; 

typedef struct notas { 
    float geral; /* prova de conhecimentos gerais */ 
    float especifica; /* prova de conhecimentos especificos */ 
} Notas; 

typedef struct candidato{ 
    int inscr; /* numero de inscricao */ 
    char nome[81]; /* nome do candidato */ 
    Data nasc; /* data de nascimento */ 
    Local *loc; /* local de prova */ 
    Notas nt; /* notas de prova */ 
} Candidato;

struct candidato** leitura(struct candidato **cand, int *n){
    cand = realloc(cand, (*n+1)*sizeof(struct candidato*));
    cand[*n] = (struct candidato*)malloc(sizeof(struct candidato)); //Alocação dinâmica para a estrutura do novo candidato.
    cand[*n]->loc = (struct local*)malloc(sizeof(struct local));    //Alocação dinâmica para o vetor do local do novo candidato.
    printf("--------------------------------------------\n");
    //Captação de cada dado do candidato:
    printf("Inscrição: ");
    scanf("%d", &cand[*n]->inscr);
    printf("Nome: ");
    getchar();
    fgets(cand[*n]->nome, 81, stdin);
    int pos = strlen(cand[*n]->nome)-1;
    cand[*n]->nome[pos] = '\0'; //Corrige o final da string.
    printf("Data de nascimento: ");
    scanf("%d %d %d", &cand[*n]->nasc.dia, &cand[*n]->nasc.mes, &cand[*n]->nasc.ano);
    printf("Endereço: ");
    getchar();
    fgets(cand[*n]->loc->ender, 81, stdin);
    pos = strlen(cand[*n]->loc->ender)-1;
    cand[*n]->loc->ender[pos] = '\0';   //Corrige o final da string.
    printf("Sala: ");
    scanf("%d", &cand[*n]->loc->sala);
    printf("Notas (geral/especifica): ");
    scanf("%f %f", &cand[*n]->nt.geral, &cand[*n]->nt.especifica);
    printf("--------------------------------------------\n");
    (*n)++;
    return cand;
}

void alteracao(struct candidato **cand, int *n){
    int n_cand;
    printf("--------------------------------------------\n");
    printf("Qual será o candidato? ");
    scanf("%d", &n_cand);
    while (n_cand>(*n-1) || n_cand<0){  
        printf("Candidato não encontrado.\n");
        printf("Qual será o candidato? ");
        scanf("%d", &n_cand);
    }
    printf("Novo endereço: ");
    getchar();
    fgets(cand[n_cand]->loc->ender, 81, stdin);
    int pos = strlen(cand[n_cand]->loc->ender)-1;
    cand[n_cand]->loc->ender[pos] = '\0';   //Corrige o final da string.
    printf("Nova sala: ");
    scanf("%d", &cand[n_cand]->loc->sala);
    printf("--------------------------------------------\n");
}

void impressao(struct candidato** cand, int *n){
    for (int i=0; i<*n; i++){
        printf("--------------------------------------------\n");
        printf("CANDIDATO %d\n", i);
        printf("Inscrição: %d.\n", cand[i]->inscr);
        printf("Nome: %s.\n", cand[i]->nome);
        printf("Data de nascimento: %d/%d/%d.\n", cand[i]->nasc.dia, cand[i]->nasc.mes, cand[i]->nasc.ano);
        printf("Endereço: %s, sala %d.\n", cand[i]->loc->ender, cand[i]->loc->sala);
        printf("Nota geral/especifica: %.2f %.2f\n", cand[i]->nt.geral, cand[i]->nt.especifica); 
        printf("--------------------------------------------\n");
    }
}

struct candidato** menu(struct candidato** cand, int *n){
    int op;
    printf("--------------------------------------------\n");
    printf("1-Leitura de novo candidato.\n2-Impressão dos dados dos candidatos.\n3-Alteração do local.\n4-Sair\n");
    printf("--------------------------------------------\n");
    do{
        printf("Opção: ");
        scanf("%d", &op);
        if (op==1){
            cand = leitura(cand, n);
            printf("Usuário adicionado.\n");
        }else if(op==2){
            impressao(cand, n);
        }else if(op==3){
            alteracao(cand, n);
            printf("Local modificado.\n");
        }
    } while (op!=4);
    return cand;
}

int main(void){
    struct candidato **cand;    //Vetor de ponteiros dos dados dos candidatos.
    int n;
    printf("Quantidade de candidatos inicialmente: ");
    scanf("%d", &n);
    cand = (struct candidato**)malloc(n*sizeof(struct candidato*)); //Alocação dinâmica da estrutura.
    for (int i=0; i<n; i++){
        cand[i] = (struct candidato*)malloc(sizeof(struct candidato));  //Alocação dinâmica do espaço para cada candidato.
        cand[i]->loc = (struct local*)malloc(sizeof(struct local)); //Alocação dinâmica do espaço do local para cada candidato.
        printf("----------------CANDIDATO %d----------------\n", i); 
        //Captação de cada dado do candidato:
        printf("Inscrição: ");
        scanf("%d", &cand[i]->inscr);
        printf("Nome: ");
        getchar();
        fgets(cand[i]->nome, 81, stdin);
        int pos = strlen(cand[i]->nome)-1;
        cand[i]->nome[pos] = '\0';  //Corrige o final da string.
        printf("Data de nascimento: ");
        scanf("%d %d %d", &cand[i]->nasc.dia, &cand[i]->nasc.mes, &cand[i]->nasc.ano);
        printf("Endereço: ");
        getchar();
        fgets(cand[i]->loc->ender, 81, stdin);
        pos = strlen(cand[i]->loc->ender)-1;
        cand[i]->loc->ender[pos] = '\0';    //Corrige o final da string.
        printf("Sala: ");
        scanf("%d", &cand[i]->loc->sala);
        printf("Notas (geral/especifica): ");
        scanf("%f %f", &cand[i]->nt.geral, &cand[i]->nt.especifica);
        printf("--------------------------------------------\n");
    }
    cand = menu(cand, &n); //Chama a função que dá o funcionamento.
    for (int i=0; i<n; i++){    //Libera os espaços das estruturas de cada candidato.
        free(cand[i]->loc);
        free(cand[i]);
    }
    free(cand); //Liberação do espaço de memória usado pela estrutura geral.
    return 0;
}
