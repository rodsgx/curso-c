#include <stdio.h>

void maiorMenor(int vet[], int tam, int *menor, int *maior){
    int i;
    *menor = *vet;
    *maior = *vet;

    for(i = 1; i < tam; i++){
        if(*menor > *(vet + i)){
            *menor = *(vet + i);
        }
        if(*maior < *(vet + i)){
            *maior = *(vet + i);
        }
    }

}

int main(){

    int tam, i, menor, maior;
    printf("Qual sera o tamanho do vetor?\n");
    scanf("%d", &tam);

    int vet[tam];

    printf("Digite os valores do vetor:\n");
    for(i = 0; i < tam; i++){
        scanf("%d", &vet[i]);    
    } 

    maiorMenor(vet, tam, &menor, &maior);

    printf("\nMenor: %d\tMaior: %d ", menor, maior);

    return 0;
}