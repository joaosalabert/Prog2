#include <stdio.h>
#include <string.h>

void otimas(int idds[20], char avali[21][8]){
    int contO=0;
    for (int i=0; i<20; i++){
        if(strcmp("otimo", avali[i])==0){   //Compara a avaliação com oque o usuário avaliou.
            contO+=1;   //Adiciona 1 ao contador de avaliações 'ótimo'.
        }
    }
    printf("Foram %d avaliações ótimas.\n", contO);
}

void difBR(int idds[20], char avali[21][8]){
    float dif, contB=0, contR=0;
    for (int i=0; i<20; i++){
        if(strcmp("bom", avali[i])==0){ //Compara a avaliação com oque o usuário avaliou.
            contB+=1;   //Adiciona 1 ao contador das avaliações 'bom'.
        }else if(strcmp("regular", avali[i])==0){   //Compara a avaliação com oque o usuário avaliou.
            contR+=1;   //Adiciona 1 ao contador das avaliações 'regular'.
        }
    }
    dif = ((contB/20.0)-(contR/20.0))*100.0;  //Cálcula da diferença de porcentagem.
    printf("A diferença percentual entre as avaliações boas e regulares é de %.2f%%.\n", dif);
}

void mediaR(int idds[20], char avali[21][8]){
    float mediaIDD=0.0, contR=0.0;
    for (int i=0; i<20; i++){
        if(strcmp("ruim", avali[i])==0){    //Compara a avaliação com oque o usuário avaliou.
            mediaIDD+=idds[i];  //Captura a maior idade de quem avaliou como 'ruim'.
            contR+=1;   //Adiciona 1 ao contador de avaliações de 'ruim'.
        }
    }
    if(contR==0){
        printf("Não tem avaliações 'ruim'.\n");   //Se não tiver avaliação 'ruim'.
    }else{
        mediaIDD /= contR;  //Cálculo da média de idades.
        printf("A média de idade entre pessoas que responderam 'ruim' é de %.2f anos.\n", mediaIDD);
    }
}

void porMaiP(int idds[20], char avali[21][8]){
    int maiorIDD=0;
    float contP=0.0;
    for (int i=0; i<20; i++){
        if (strcmp("pessimo", avali[i])==0){    //Compara a avaliação com oque o usuário avaliou.
            contP+=1;
            if(idds[i]>maiorIDD){
                maiorIDD = idds[i]; //Captura a maior idade de quem votou em 'péssimo'.
            } 
        }
    }
    contP = ((contP/20.0))*100;
    printf("A maior idade que avaliou como 'péssimo' foi %d e a porcentagem das respostas foi de %.2f%%.\n", maiorIDD, contP);
}

void difOR(int idds[20], char avali[21][8]){
    int maiO=0, maiR=0;
    for (int i=0; i<20; i++){
        if(strcmp("otimo", avali[i])==0){   //Compara a avaliação com oque o usuário avaliou.
            if(idds[i]>maiO){
                maiO = idds[i]; //Captura a maior idade que avaliou como 'ótimo'.
            }
        }else if(strcmp("ruim", avali[i])==0){  //Compara a avaliação com oque o usuário avaliou.
            if(idds[i]>maiR){
                maiR=idds[i];   //Captura a maior idade que avaliou como 'ruim'.
            }
        }
    }
    int dif = maiO-maiR;    //Calcula a diferença entre as maiores idades.
    printf("A diferença entre a maior idade que respondeu 'ótimo' e a maior idade que respondeu 'ruim' foi de %d\n", dif);
}

int main(void){
    int idds[21];  //Vetor que guarda as idades dos entrevistados.
    char avali[21][8]; //Vetor que guarda as avaliações.
    //Lendo as idades e avaliações:
    for (int i=0; i<20; i++){
        printf("Pessoa %d\n", i+1);
        printf("Idade: "); 
        scanf("%d", &idds[i]);
        printf("Avaliação: "); 
        scanf("%s", avali[i]);
    }
    otimas(idds, avali);
    difBR(idds, avali);
    mediaR(idds, avali);
    porMaiP(idds, avali);
    difOR(idds, avali);
    return 0;
}
