#include <stdio.h>
#include <stdlib.h>

void determineIndiceDoMenor(int vetor[], int n) {
    int i, j, indiceMenor, aux;
    printf("\n");
    for (i = 0; i < n; i++) {
        // Encontrar o índice do menor elemento em vetor[]
        indiceMenor = i;
        for (j = i + 1; j <= n; j++) {
            if (vetor[j] < vetor[indiceMenor]) {
                indiceMenor = j;
            }
        }
        printf("%d %d\n",indiceMenor,vetor[indiceMenor]);
        // Realiza a troca do menor encontrado com o primeiro elemento do subvetor(novo indice eu quero dizer)
        if (indiceMenor != i) {
            aux = vetor[i];
            vetor[i] = vetor[indiceMenor];
            vetor[indiceMenor] = aux;
        }
    }
}

int main() {
	int *vet;
	int i,j,n;
	int fim;

	scanf("%d",&n);
    vet = (int *) malloc(n * sizeof(int)); //determina dinamicamente o tamanho do vetor usando malloc.
    for (i = 0; i < n; i++) {
        scanf("%d",&vet[i]);
    }
    
	//bloco de repeticao para ordenar o vetor.
	fim = n-1;
	determineIndiceDoMenor(vet, fim);
	//fim do bloco de repeticao.

	//imprimir o vetor ordenado.
	printf("\n");
	for(j = 0; j <= fim; j++)
		printf("%d ",vet[j]);

	return 0;
}
