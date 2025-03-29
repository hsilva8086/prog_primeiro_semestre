#include <stdio.h>
#include <stdlib.h>

int determineIndiceDoMenor(int vet[], int ini, int fim) {
    int i,menor, aux;
    for(i = ini; i <= fim; i++){
        if(vet[i] < vet[ini]) {
            menor = i;
        }
    }
    printf("pos:%d|%d %d\n",ini, menor, vet[menor]);
   // printf("A=> ini:%d menor:%d |",vet[ini], vet[menor]);
    if(vet[menor] < vet[ini]){
        aux = vet[ini];
        vet[ini] = vet[menor];
        vet[menor] = aux;
    }
    //printf("B=> ini:%d menor:%d |",vet[ini], vet[menor]);
    return menor;
}
    
int main() {
    int vet[5] = { 1, 5, 2, 2, 1 };
    int j,k;
    int aux;
    int ini = 0;
    int fim = sizeof(vet)/4-1;
    
    //bloco de repeticao para ordenar o vetor
    ini = 0;
    while(ini <= fim)
        determineIndiceDoMenor(vet, ini++, fim);
    //fim do bloco de repeticao
    
    //imprimir o vetor
    printf("\n");
    for(j = 0; j <= fim; j++) { 
        printf("%d ",vet[j]);
    }
        
    return 0;
}
