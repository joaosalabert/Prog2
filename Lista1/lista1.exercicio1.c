#include <stdio.h>

int main(void){
    int seg;
    printf("Digite um número inteiro em segundos: ");
    scanf("%d", &seg);  //Recebe o número total em segundos.
    int h = seg/3600;   //Transforma no máximo de horas possível.
    int rh = seg%3600;  //Pega o que sobrou das horas transformadas.
    int m = rh/60;  //Transforma em minutos através do resto das horas.
    int s = rh%60;  //O resto dos minutos são os segundos.
    printf("%d hora(s), %d minuto(s), %d segundo(s)\n", h, m, s);
    return 0;
}