#include <stdio.h>

int main(void){
    int horas, valor;
    float salario;
    printf("Informe as horas de trabalho semanal e o valor da hora: ");
    scanf("%d %d", &horas, &valor);
    salario = horas*valor;  //Calcula o salário do traballhador pelas horas e valor.
    if(horas<=40){
        printf("Você não recebe bônus.");
    }else if(horas>40 && horas<=60){
        printf("Seu salário era de R$%.2f\n", salario);
        salario *= 1.5; //Bônus de 50% no salário.
        printf("Você tem bônus de 50%%. Seu salário agora é R$%.2f", salario);
    }else{
        printf("Seu salário era de R$%.2f\n", salario);
        salario *= 2;   //Bônus de 100% no salário.
        printf("Você tem bônus de 100%%. Seu salário agora é R$%.2f", salario);
    }
    return 0;
}
