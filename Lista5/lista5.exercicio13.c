#include <stdio.h>
#include <string.h>

int main() {
    char texto[] = "usuario_99@gmail.com";

    // strchr: Acha a primeira ocorrência de um caractere fixo e lê a string a partir dele
    // strchr(nome_da_string, 'caractere_com_aspas_simples')
    printf("E-mail de onde vem: %s\n", strchr(texto, '@'));

    // strcspn: Retorna o INDEX de onde aparece o primeiro numero ou simbolo
    // strcspn(nome_da_string, "lista_de_obstaculos_com_aspas_duplas")
    int index = strcspn(texto, "0123456789_@");
    printf("O nome tem %d letras seguidas.\n", index);

    // strstr: Acha a primeira ocorrência de uma palavra e lê a string a partir dela
    // strstr(nome_da_string, "palavra_com_aspas_duplas")
    printf("Leitura a partir da substring: %s\n", strstr(texto, "_99"));

    return 0;
}