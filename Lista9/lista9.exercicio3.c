#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * estado[27] = {"AC","AL","AM","AP","BA","CE","DF","ES","GO","MA","MG","MS","MT","PA", "PB","PE","PI","PR","RJ","RN","RO","RR","RS","SC","SE","SP","TO"}; 

typedef struct assalariados { 
    char nome[51]; 
    char sexo; 
    int idade; 
    float salario; 
    char estado[3]; 
} Assalariados; 

Assalariados *cadastra(char *nome, char sexo, int idade, float  salario, char *estado){
    struct assalariados *trabalhadores;
    trabalhadores = malloc(sizeof(struct assalariados));    //Alocação dinâmica para a estrutura a ser salva.
    strcpy(trabalhadores->nome, nome);  //Copia a string e atribui ao nome.
    trabalhadores->sexo = sexo;
    trabalhadores->idade = idade;
    trabalhadores->salario = salario;
    strcpy(trabalhadores->estado, estado);  //Copia a string e atribui ao estudo.
    return trabalhadores;
}

void relatorio(Assalariados **ptr, int numAssalariados){
    int j=0;
    while (j<27){   //Percorre todos os estados.
        int cont=0;
        for (int i=0; i<numAssalariados; i++){  //Percorre toda a lista dos assalariados.
            if (ptr[i]->sexo=='M' && ptr[i]->idade>40 && ptr[i]->salario>1000 && strcmp(ptr[i]->estado, estado[j])==0){ //Se for um homem de mais de 40 anos que ganhe mais de 1000 reais e seja do mesmo estado do loop atual dos estados...
                cont++; //É adicionado 1 ao contador.
            }
        }
        if (cont>0){    //Caso o contador seja maior que 0, imprime a quantidade.
            printf("Estado=%s com %d homens maiores de 40 anos e salário maior que R$ 1000,00\n", estado[j], cont);
        }
        j++;    //Incrementa 1 a j ara ir para o próximo estado.
    }
}

void imprime(Assalariados **ptr, int numAssalariados){
    for (int i=0; i<numAssalariados; i++){
        printf("ASSALARIADO %d\n", i);
        printf("Nome: %s\n", ptr[i]->nome);
        printf("Sexo: %c\n", ptr[i]->sexo);
        printf("Idade: %d\n", ptr[i]->idade);
        printf("Salário: %.2f\n", ptr[i]->salario);
        printf("Estado: %s\n", ptr[i]->estado);    
    }
}

int main(void) { 
    Assalariados **pessoas; 
    int numAssalariados=3; 
    pessoas = (Assalariados**)malloc(numAssalariados*sizeof(Assalariados*));  
    pessoas[0] = cadastra("Fulano de tal", 'M', 45, 1500.00, "RJ");  
    pessoas[1] = cadastra("Ciclano", 'M', 50, 2500.00, "RS");  
    pessoas[2] = cadastra("Beltrano", 'M', 42, 500.00, "RS");  
    imprime(pessoas, numAssalariados); 
    relatorio(pessoas,numAssalariados); 
    return 0;
} 
