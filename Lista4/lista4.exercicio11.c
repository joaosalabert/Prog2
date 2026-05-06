#include <stdio.h>

int main(void){
    int v1[20], v2[20];
    for (int i=0; i<20; i++){
        printf("Digite o %dº número do Vetor1: ", i);
        scanf("%d", &v1[i]);
    }
    printf("\n");
    for (int i=0; i<20; i++){
        printf("Digite o %dº número do Vetor2: ", i);
        scanf("%d", &v2[i]);
    }
    char v3[20];
    printf("\n");
    for (int i=0; i<20; i++){
        printf("Informe o %dº operador: ", i);
        scanf(" %c", &v3[i]);
    }
    float v4[20][20];
    printf("\n");
    for (int i=0; i<20; i++){
        for (int j=0; j<20; j++){
            switch (v3[i]){
                case '+':
                    v4[i][j] = v1[i] + v2[j];
                    break;
                case '-':
                    v4[i][j] = v1[i] - v2[j];
                    break;
                case '*':
                    v4[i][j] = v1[i] * v2[j];
                    break;
                case '/':
                    if (v2[j]!=0){
                        v4[i][j] = (float)v1[i] / v2[j];
                    }else{
                        v4[i][j] = 0;
                    }
                    break; 
                default:
                    printf("Operador inválido.");
                    v4[i][j] = 0;
                    break;
            }
        }
    }
    return 0;
}
