#include <stdio.h>

int determineIndiceDoMenor(int vet[], int ini, int fim, int menor){
    int i,aux;
    for(i = ini; i < fim; i++){
        if(vet[i] < menor) {
            menor = i;
        } else {
            continue;
        }
    }
    return menor;
}
    
int main() {
    int vet[5] = { 1, 5, 2, 0, 1 };
    int menor = vet[0];
    int ini = 0;
    int fim = sizeof(vet)/4-1;
    int j,k;
    for(j = 0; j<fim ; j++) {
        menor = determineIndiceDoMenor(vet, ini,fim, menor);
        printf("%d %d\n",menor, vet[menor]);        
    }
    for(k = 0;k<=fim;k++){
        printf("%d ",vet[k]);        
    }

    return 0;
}
