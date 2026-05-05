#include <stdio.h>

int valida_email(char *s){
    int i=0, contL=0, contN=0;
    if(s[0]<'a' || s[0]>'z'){
        return 0;   //Se o primeiro caractere não for uma letra entre 'a' e 'z', o email é inválido.
    }
    for(i=0; s[i]!='\0'; i++){
        if(s[i]=='.' && s[i+1]=='.'){   //Se um caractere for '.' e o próximo também, o email é inválido.
            return 0;
        }
        //Se o caractere não for uma letra entre 'a' e 'z, nem um númere entre 0 e 9, nem um '.', nem '-', nem '_', o email é inválido: 
        if((s[i]<'a' || s[i]>'z') && (s[i]<'0' || s[i]>'9') && (s[i]!='.') && (s[i]!='-') && (s[i]!='_')){
            return 0;
        }
        if(s[i]>='0' && s[i]<='9'){
            contN++;    //Contando a quantidade de números no email.
        }
        if(s[i]>='a' && s[i]<='z'){
            contL++;    //Contando a quantidade de letras no email.
        }
    }
    if(s[i-1]=='.'){
        return 0;   //Se o último caractere for '.', o email é inválido.
    }
    if((contL+contN)<2){
        return 0;   //Se não tiver pelo menos 2 letras ou números, o email é inválido.
    }
    if(i>64){
        return 0;   //Se tiver mais de 64 caracteres, o email é inválido.
    }
    
    return 1;
}

int main(void){
    char email[65];
    printf("Parte local do email: ");
    scanf("%s", email);
    int v = valida_email(email);
    if(v==1){
        printf("Seu email é válido: %s@hotmail.com.", email);
    }else{
        printf("Seu email é inválido.");
    }
    return 0;
}
