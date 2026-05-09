#include <stdio.h>
#include <string.h>

int main(void){
    char nome[50], end[30], tel[10];
    printf("Nome: ");
    scanf(" %[^\n]", nome);
    printf("Endereço: ");
    scanf(" %[^\n]", end);
    printf("Telefone: ");
    scanf(" %[^\n]", tel);
    strcat(nome, end);
    strcat(nome, tel);
    printf("%s", nome);
    return 0;
}
