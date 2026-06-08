#define MAX 4 
#define MAXNOME 31 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

void atribui(char **nomes, int indice, char *nome){
    strcpy(nomes[indice], nome);    //Atribui o nome à lista de nomes.
} 

char *get_sobrenome(char *nome){
    char *sobrenome;
    int indice;
    for (int i=0; nome[i]!='\0'; i++){
        if (nome[i]==' '){
            indice = i+1;   //Descobre o índice do último espaço da string.
        }
    }
    int tam = strlen(nome)-indice+1;    //Tamanho do último sobrenome.
    sobrenome = (char*)malloc(tam*sizeof(char));    //Alocação dinâmica para a string do sobrenome.
    int i=0;
    for (indice; nome[indice]!='\0'; indice++){ //Percorre a partir do coomeço do sobrenome até o final do nome.
        sobrenome[i] = nome[indice];    //Recebe caractere por caractere do sobrenme.
        i++;
    }
    sobrenome[i] = '\0';    //Fecha a string da maneira correta.
    return sobrenome;
}

int main(void){ 
    int i; 
    char **nomes;  
    char *sobrenome; 
    nomes = (char**)malloc(MAX*sizeof(char*)); 
    for (i=0; i<MAX; i++) { 
        nomes[i] = (char *) malloc(sizeof(char)*MAXNOME);   
    }  
    atribui(nomes, 0, "Fulano Silva"); 
    atribui(nomes, 1, "Maria do Carmo");   
    atribui(nomes, 2, "Beltrano Belmonte"); 
    atribui(nomes, 3, "Pedro dos Santos"); 
    for (i=0 ; i<MAX ; i++) { 
        sobrenome = get_sobrenome(nomes[i]); 
        printf("\n%s ", sobrenome);  
        printf(" %d",strlen(sobrenome)>5?i:0); // 2º printf  
        free(sobrenome);
    }
    printf("\n%c", nomes[0][3]); // 3º printf  
    printf("c)'Silva  0\nCarmo  0\nBelmonte  2\nSantos  3\n'");
    printf("d)'a'");
    return 0;
}
