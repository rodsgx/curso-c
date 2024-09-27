#include <stdio.h>
#include<stdlib.h>

int main(){

    FILE *file;
    char letra;

    file = fopen("teste.txt", "w+");

    if(file){
        printf("\tDigite um texto: ");
        scanf("%c", &letra);
        while(letra != '\n'){
            fputc(letra, file);
            scanf("%c", &letra);
        }
        rewind(file);
        printf("\n\tTexto lido do arquivo: ");
        while(!feof(file)){
            letra = fgetc(file);
            printf("%c", letra);
        }
        fclose(file);
    }
    else{
        printf("\n\tErro ao abrir o arquivo!\n");
    }

    return 0;
}