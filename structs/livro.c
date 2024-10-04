#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _livro {
    char nome[50]; 
    int paginas;
} Livro;

int main() {
    Livro livro1;

    printf("Digite o nome do livro: ");
    fgets(livro1.nome, sizeof(livro1.nome), stdin);
    printf("Digite o numero de paginas do livro: ");
    scanf("%d", &livro1.paginas);

    printf("\nSeu livro eh: %s", livro1.nome);
    printf("Ele possui %d paginas\n", livro1.paginas);

    return 0;
}
