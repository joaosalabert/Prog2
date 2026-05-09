#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(void){
    char nome[9], tecla, senha[9];  //Inicializando o nome, a senha e a tecla a ser lida no loop.
    int i=0;

    printf("CADASTRO DE USUÁRIO\n");
    printf("Nome de usuário: ");
    while (i<8){
        tecla = getch();    //Captura tecla por tecla.
        if (tecla=='\r'){
            break;  //Se o usuário clicar Enter, o loop para.
        }
        if (tecla>='A' && tecla<='Z' || tecla>='a' && tecla<='z' || tecla>='0' && tecla<='9'){
            nome[i] = tecla;
            printf("%c", nome[i]);  //Se o usuário digitar uma tecla válida, captura-se o caractere e imprime ele.
            i++;    //Incrementa 1 ao i para rodar o loop.
        }
    }
    nome[i] = '\0'; //Finaliza a string com '\0'.

    printf("\nSenha: ");
    i=0;    //Zera o contador.
    while (i<8){
        tecla = getch();    //Captura tecla por tecla.
        if (tecla=='\r'){
            break;  //Se o usuário clicar Enter, o loop para.
        }
        if (tecla>='A' && tecla<='Z' || tecla>='a' && tecla<='z' || tecla>='0' && tecla<='9'){
            senha[i] = tecla;
            printf("*");    //Se o usuário digitar uma tecla válida, captura-se o caractere e imprime o asterisco.
            i++;    //Incrementa 1 ao i para rodar o loop.
        }
    }
    senha[i] = '\0';    //Finaliza a string com '\0'.

    char novo_nome[9], nova_senha[9];   //Inicializa as novas variáveis de login.
    i=0;    //Zera o contador.
    printf("\nLOGIN DE USUÁRIO\n");
    printf("Nome de usuário: ");
    while (i<8){
        tecla = getch();    //Captura tecla por tecla.
        if (tecla=='\r'){
            break;  //Se o usuário clicar Enter, o loop para.
        }
        if (tecla>='A' && tecla<='Z' || tecla>='a' && tecla<='z' || tecla>='0' && tecla<='9'){
            novo_nome[i] = tecla;
            printf("%c", novo_nome[i]); //Se o usuário digitar uma tecla válida, captura-se o caractere e imprime ele.
            i++;    //Incrementa 1 ao i para rodar o loop.
        }
    }
    novo_nome[i] = '\0';    //Finaliza a string com '\0'.
    
    i=0;    //Zera o contador.
    printf("\nSenha: ");
    while (i<8){
        tecla = getch();    //Captura tecla por tecla.
        if (tecla=='\r'){
            break;  //Se o usuário clicar Enter, o loop para.
        }
        if (tecla>='A' && tecla<='Z' || tecla>='a' && tecla<='z' || tecla>='0' && tecla<='9'){
            nova_senha[i] = tecla;
            printf("*");    //Se o usuário digitar uma tecla válida, captura-se o caractere e imprime o asterisco.
            i++;    //Incrementa 1 ao i para rodar o loop.
        }
    }
    nova_senha[i]='\0';

    if (strcmp(nome, novo_nome)==0 && strcmp(senha, nova_senha)==0){
        printf("\n\nOK");
    }else{
        printf("\n\nAcesso negado.");
    }
    
    return 0;
}
