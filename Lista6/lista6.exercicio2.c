#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

char *compactar(char *s){
    char *nova_f;
    int i=0;
    while (s[i]==' '){
        i++;    //Identifica o primeiro caractere da frase e guarda o indice.
    }
    int c = i, fim = strlen(s)-1; //O tamanho da string com espaços menos o '\0'.
    while (s[fim]==' '){
        fim--;  //Identifica o último caractere e esse se torna o índice final.
    }
    int tam = fim-c+1;  //O tamanho da string sem os espaços é o fim menos o começo mais o espaço para o '\0'.
    nova_f = (char*)malloc((tam+1)*sizeof(char));
    if (nova_f==NULL){
        return NULL;
    }
    i=0;
    for (c; i<tam; i++){
        nova_f[i]=s[c]; //Cada caractere da frase é posta em uma nova string.
        c++;
    }
    nova_f[i]='\0';
    return nova_f;
}

int main(void){
    char *frase, tecla;
    int i=0;
    printf("Frase: ");
    frase = (char*)malloc(100*sizeof(char));
    while (tecla!='\r'){
        tecla = getch();
        if (tecla>='A' && tecla<='Z' || tecla>='a' && tecla<='z' || tecla==' '){
            frase[i] = tecla;
            printf("%c", frase[i]); //Se o caractere for um dos aceitos, entra na frase.
            i++;
        }   
    }
    frase[i] = '\0';
    printf("\n[%s]", compactar(frase));
    return 0;
}
