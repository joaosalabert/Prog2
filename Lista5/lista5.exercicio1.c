#include <stdio.h>

void vogais(char *frase, int *cont){
    for (int i=0; frase[i]!='\0'; i++){ //Perccorre a frase.
        if (frase[i]=='a' || frase[i]=='A' || frase[i]=='e' || frase[i]=='E' || frase[i]=='i' || frase[i]=='I' || frase[i]=='o' || frase[i]=='O' || frase[i]=='u' || frase[i]=='U'){    
        *cont+=1;   //Caso tenha uma vogal na posição indicada, incrementa 1 ao contador.
        }
    }
}

int main(void){
    int cont=0;
    char frase[30];
    printf("Frase: ");
    fgets(frase, 50, stdin);    //Recolhe a frase por inteiro, ao invés de ler até o primeiro espaço.
    vogais(frase, &cont);
    printf("Tem %d vogais na frase.", cont);
    return 0;
}
