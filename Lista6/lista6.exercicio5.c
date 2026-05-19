#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *cifra_cesar(char *msg){
    char *nova_msg; //Criação da nova cadeia de caracteres.
    int i=0;
    int tam = strlen(msg)+1;    //Nova mensagem vai ter o tamanho da original, mais 1 para o '\0'.
    nova_msg = (char*)malloc(tam*sizeof(char)); //Alocação dinâmica da mensagem alterada.
    for (i; msg[i]!='\0'; i++){ //Percorre toda a mensagem.
        if (msg[i]>='A' && msg[i]<='Z' || msg[i]>='a' && msg[i]<='z'){  //Pega os caracteres válidos de alteração.
            if (msg[i]=='X'){
                nova_msg[i] = 'A';
            }else if (msg[i]=='Y'){
                nova_msg[i] = 'B';
            }else if (msg[i]=='Z'){
                nova_msg[i] = 'C';
            }else if (msg[i]=='x'){
                nova_msg[i] = 'a';
            }else if (msg[i]=='y'){
                nova_msg[i] = 'b';
            }else if (msg[i]=='z'){
                nova_msg[i] = 'c';
            }else{
                nova_msg[i] = msg[i]+3;
            }
        }else{
            nova_msg[i] = msg[i];   //Não altera o caractere caso ele não seja uma letra.
        }
    }
    nova_msg[i] = '\0';
    return nova_msg;
}

int main(void){
    char msg[30];
    int i=0;
    printf("Mensagem: ");
    fgets(msg, 30, stdin);
    char *nova_frase = cifra_cesar(msg);
    printf("Frase codificada: %s", nova_frase);
    return 0;
}
