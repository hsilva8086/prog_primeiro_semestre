#include <stdio.h>
#include <stdlib.h>

int determineIndiceDoMenor(int vet[], int ini, int fim){
    int i,menor = 0;
    for(i = ini; i <= fim; i++){
        if(vet[i] < vet[menor]) {
            menor = i;
        } else {
            continue;
        }
    }
    return menor;
}
    
int main() {
    int vet[5] = { 1, 5, 2, 0, -1 };
    int j,k;
    int aux;
    int menor = vet[0];
    int xmenor = menor;
    int ini = 0;
    int fim = sizeof(vet)/4-1;
    
    //bloco de repeticao para ordenar o vetor
    for(k=ini;k<=fim;k++) {
        xmenor = determineIndiceDoMenor(vet, k, fim);
        printf("%d %d\n",xmenor, vet[xmenor]); 
    
        if(xmenor != menor){
            aux = vet[k];
        
            vet[k] = vet[xmenor];
            vet[xmenor] = aux;
        }
    }
    //fim do bloco de repeticao
    
    //imprimir o vetor
    for(j = 0; j <= fim; j++){
        printf("%d, ",vet[j]);
    }
        
    return 0;
}
