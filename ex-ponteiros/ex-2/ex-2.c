#include<stdio.h>

void troca(float *a, float *b){
    float c;
    c = *a;
    *a = *b;
    *b = c;

    printf("\nValor de A: %.1f\n", *a);
    printf("Valor de B: %.1f\n", *b);

}

int main(){

    float x, y;

    printf("Quais serao os valores?\n");
    scanf("%f %f", &x, &y);

    printf("Valor de X: %.1f\n", x);
    printf("Valor de y: %.1f\n", y);

    troca(&x, &y);

    return 0;
}