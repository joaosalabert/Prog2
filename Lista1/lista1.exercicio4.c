#include <stdio.h>

float media(float n1, float n2, float n3){
    float med = (n1+n2+n3)/3.0; //Calculando a média.
    return med;
}

int main(void){
    float n1, n2, n3;   //Inicializando todas as variáveis como float.
    while(0>n1 || 10<n1 || 0>n2 || 10<n2 || 0>n3 || 10<n3){ //Possibilidades fora do espectro esperado.
        printf("Informe as notas válidas: ");
        scanf("%f %f %f", &n1, &n2, &n3);   //Recebendo e atribuindo os valores às variáveis.
    }
    float med = media(n1, n2, n3);  //Calculando a média com a função.
    if(med<4.0){
        printf("Com a média %.2f você está REPROVADO!", med);   //Caso o aluno esteja reprovado.
    }else if(4.0<=med && med<6.0){
        printf("Com a média %.2f você tem direito à VS.", med); //Caso o aluno esteja apto para a VS.
    }else if(6.0<=med){
        printf("Com a média %.2f você está APROVADO, parbéns!", med);   //Caso o aluno esteja aprovado.
    }
    return 0;
}
