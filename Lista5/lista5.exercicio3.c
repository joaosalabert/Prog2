#include <stdio.h>

int vezes(char frase[20], char c){
    int cont=0;
    for (int i=0; frase[i]!='\0'; i++){ //Percore toda a frase.
        if (frase[i]==c){
            cont+=1;    //Se o caractere da posição for c, contador é incrementado em 1.
        }
    }
    return cont;
}

int main(void){
    char frase[20], c;
    printf("Frase: ");
    fgets(frase, 20, stdin);    //Lê a frase por inteiro, sem pular espaços em branco.
    printf("Caractere: ");
    scanf("%c", &c);    //Caractere a ser procurado.
    int cont=vezes(frase, c);
    printf("O caractere '%c' aparece %d vezes.", c, cont);
    return 0;
}
