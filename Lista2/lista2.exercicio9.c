#include <stdio.h>

unsigned int INVERTE(unsigned int num){
    unsigned int invertido = 0;
    while(num>0){   //Enquanto o número ainda tiver dígitos para inverter.
        invertido = (invertido*10) + (num%10);  //Pega o último número e coloca na unidade da nova variável.
        num /= 10;  //Remove o último dígito do número original.
    }
    return invertido;
}

int main(void){
    unsigned int num;
    printf("Digite um número para ser invertido: ");
    scanf("%u", &num);
    printf("Resultado: %u", INVERTE(num));
    return 0;
}
