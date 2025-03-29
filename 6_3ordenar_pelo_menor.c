#include <stdio.h>
#include <stdlib.h>

int determineIndiceDoMenor(int vet[], int ini, int fim) {
	int i,menor, aux;
	for(i = ini; i <= fim; i++) {
		if(vet[i] < vet[ini]) {
			menor = i;
		} else {
			menor = ini;
		}
	}

	printf("%d %d\n",menor, vet[menor]);

	if(vet[menor] < vet[ini]) {
		aux = vet[ini];
		vet[ini] = vet[menor];
		vet[menor] = aux;
	}

	return menor;
}

int main() {
	int *vet;
	int i,j,n;
	int ini = 0;
	int fim;

	scanf("%d",&n);
    vet = (int *) malloc(n * sizeof(int)); //determina dinamicamente o tamanho do vetor usando malloc.
    for (i = 0; i < n; i++) {
        scanf("%d",&vet[i]);
    }
    
	//bloco de repeticao para ordenar o vetor.
	ini = 0;
	fim = n-1;
	while(ini < fim) {
		determineIndiceDoMenor(vet, ini++, fim);
	}
	//fim do bloco de repeticao.

	//imprimir o vetor.
	printf("\n");
	for(j = 0; j <= fim; j++)
		printf("%d ",vet[j]);

	return 0;
}
