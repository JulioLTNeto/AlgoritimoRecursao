#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int posicao;

int verifica(char* palavra, int t){

    if(palavra[t] != palavra[posicao]){
        return 0;
    }
    if(t == 0){
        return 1;
    }
    posicao++;
    return verifica(palavra, t-1);
}

int main()
{
    printf("Hello world!\n");
    posicao = 0;
    char palavra[20];
    scanf("%s", palavra);

    if(verifica(palavra, strlen(palavra)-1)){
        printf("Palindrome\n");
    }else{
        printf("Não é palindrome\n");
    }

    return 0;
}
