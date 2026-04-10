#include <stdio.h>

int equacao(float a, char s, float b){
    switch (s){
    case '+':
        printf("Resultado: %.2f", a+b); break;  //Caso a operação seja uma soma.
    case '-':
        printf("Resultado: %.2f", a-b); break;//Caso a operação seja uma diferença.
    case '/':
        if(b!=0){
            printf("Resultado: %.2f", a/b); break;
        } else{
            printf("Impossível fazer divisão por 0."); break;   //Caso a divisão não seja válida.
        }
    case '*':
        printf("Resultado: %.2f", a*b); break;  //Caso a operação seja uma multiplicação.
    default:
        printf("Sinal não válido.");    //Caso o sinal não seja um dos disponíveis.
        break;
    }
}

int main(void){
    float a, b; //Iniciando a e b como float.
    char s; //Iniciando s como caractere.
    printf("Equação: ");
    scanf("%f %c %f", &a, &s, &b);  //Recebendo os valore e o sinal.
    equacao(a, s, b);   //Ativando a função para calcular a equação.
    return 0;
}