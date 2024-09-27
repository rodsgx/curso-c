#include <stdio.h>
#include<stdlib.h>
#include<string.h>

//Função que recebe um nome e retorna o devolve o nome invertido

char* inverter(char vet[]){
    int i, fim, tam = strlen(vet);
    char *novo = malloc((tam + 1) * sizeof(char));
    fim = tam - 1;

    for (i = 0; i < tam; i++){
        novo[fim] = vet[i];
        fim --;
    }
    novo[i] = '\0';
    return novo;
}

int main(){

    char palavra[25] = {"Lord of The Rings"};
    char *p;
    
    p = inverter(palavra);
    printf("%s\n", p);

    return 0;
}