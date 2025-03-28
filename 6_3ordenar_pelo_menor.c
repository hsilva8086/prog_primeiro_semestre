#include <stdio.h>

int determineIndiceDoMenor(int vet[], int ini, int fim){
    int i,aux;
    int menor = vet[0];
    for(i = 1; i < fim; i++){
        if(vet[i] < menor) {
            menor = vet[i];
            printf("%d ",i);
        } else {
            continue;
        }
    }
    return menor;
}
    
int main() {
    int vet[5] = { 12, 3, 9, 3, 26 };
    int menor;
    int ini = 0;
    int fim = sizeof(vet)/4-1;
    int j,k;
    for(j = 0;j<fim;j++) {
        menor = determineIndiceDoMenor(vet, ini,fim);
        printf("%d\n",menor);        
    }
    for(k = 0;k<=fim;k++){
        printf("%d ",vet[k]);        
    }

    return 0;
}
