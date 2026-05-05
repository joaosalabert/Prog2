#include <stdio.h>

int main(void){
    int a=0, b, c, d, x, *p=&a;
    float e, f, g, h;
    char v[10];
    printf("Endereço atual de a: %d\n", p);
    while(1){
        p++;
        printf("Atual conteúdo do endereço: %d\n", *p);
        if(p==&b){
            printf("O novo endereço coincdiu com o endereço de b.\n");
            break;
        }else if(p==&c){
            printf("O novo endereço coincdiu com o endereço de c.\n");
            break;
        }else if(p==&d){
            printf("O novo endereço coincdiu com o endereço de d.\n");
            break;
        }else if(p==&x){
            printf("O novo endereço coincdiu com o endereço de x.\n");
            break;
        }else if((void*)p==(void*)&e){
            printf("O novo endereço coincdiu com o endereço de e.\n");
            break;
        }else if((void*)p==(void*)&f){
            printf("O novo endereço coincdiu com o endereço de f.\n");
            break;
        }else if((void*)p==(void*)&g){
            printf("O novo endereço coincdiu com o endereço de g.\n");
            break;
        }else if((void*)p==(void*)&h){
            printf("O novo endereço coincdiu com o endereço de h.\n");
            break;
        }else if((void*)p==(void*)&v){
            printf("O novo endereço coincdiu com o endereço de v.\n");
            break;
        }
    }
    return 0;
}
