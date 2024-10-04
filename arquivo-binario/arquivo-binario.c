#include<stdio.h>
#include<stdlib.h>
/*
    Modos de abertura de arquivos:
    wb -> Escrita
    rb -> leitura
    ab -> anexar
    rb+ -> leitura e escrita
    wb+ -> leitura e escrita (apaga o conteúdo caso o arquivo exista)
    ab+ -> leitura e escrita (adiciona ao final do arquivo)
*/

typedef struct{
    char nome[50];
    int idade;
} Aluno;

void escrever(char arq[]){
    Aluno a;
    FILE *file = fopen(arq, "ab");

    if (file){
        printf("Digite o nome e a idade do Aluno: ");
        scanf("%49[^\n]%d", a.nome, &a.idade);
        fwrite(&a, sizeof(Aluno), 1, file);
        fclose(file);
    }
    else{
        printf("\nErro ao abrir arquivo\n");
    }
}
void ler(char arq[]){
    Aluno a;
    FILE *file = fopen(arq, "rb");

    if(file){
        while(!feof(file)){
            if(fread(&a, sizeof(Aluno), 1, file)){
                printf("\nNome: %s\nIdade: %d\n", a.nome, a.idade);
            }
        }
        fclose(file);
    }
    else{
        printf("\nErro ao abrir arquivo!\n");
        }
}

int main(){
    char arquivo[] = {"arquivo.dat"};

    escrever(arquivo);
    ler(arquivo);

    return 0;
}