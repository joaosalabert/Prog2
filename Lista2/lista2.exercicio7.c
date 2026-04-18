#include <stdio.h>

int main(void){
    int horas, valor;
    float salario;
    printf("Informe as horas de trabalho semanal e o valor da hora: ");
    scanf("%d %d", &horas, &valor);
    if(horas<=40){  //Até 40 horas de trabalho não ganha bônus.
        salario = horas*valor;
        printf("Você não tem direito à bônus.\n");
    }else if(horas>40 && horas<=60){    //Acima de 40 e até 60 horas, bônus de 50%.
        printf("Com %d horas, seu bônus é de 50%%.\n", horas);
        horas -= 40;    //Retira as horas que não valem para o bônus.
        salario = (40*valor)+(valor*horas*1.5);
    }else{  //Acima de 60 horas o bônus é de 100%.
        printf("Com %d horas, seu bônus é de 100%%.\n", horas);
        horas -= 60;    //Retira as horas que não valem para o bônus.
        salario = (40*valor)+(20*valor*1.5)+(horas*valor*2);
    }
    printf("Seu salário é de R$%.2f.", salario);
    return 0;
}
