#include<stdio.h> 
#include<string.h> 

void main(void) { 
    char texto[]= "foi muito facil";    //Inicializa a string.
    int i; 
    for (i = 0; texto[i]!='\0'; i++){   //Percorre a string. 
        if (texto[i] == ' ') 
            break;  //Se a posição for um espaço em branco o loop para.
    } 
    i++;    //Incrementa 1 ao i para começar na próxima posição.
    for (i; texto[i]!='\0'; i++) { 
        printf("%c", texto[i]);     //Percorre o resto da string a partir de i.
    }
}
