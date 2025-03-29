#include <stdio.h>
#include <stdlib.h>

void mesclarVetores(int vet1[], int vet2[], int vet3[], int n) {
    int i = 0, j = 0, k = 0;
    
    // Mescla  os vetores
    while (i < n && j < n) {
        if (vet1[i] <= vet2[j]) {
            vet3[k++] = vet1[i++];
        } else {
            vet3[k++] = vet2[j++];
        }
    }
    
    // Copia os elementos vet1
    while (i < n) {
        vet3[k++] = vet1[i++];
    }
    
    // Copia os elementos vet2
    while (j < n) {
        vet3[k++] = vet2[j++];
    }
}

int main() {
    int *vet1,*vet2,*vet3;
	int i,j,n;
	int fim;

	scanf("%d",&n);
	 //determina dinamicamente o tamanho do vetor usando malloc.
    vet1 = (int *) malloc(n * sizeof(int));
    vet2 = (int *) malloc(n * sizeof(int));
    vet3 = (int *) malloc(n * sizeof(int) * 2);
    
    for (i = 0; i < n; i++)
        scanf("%d",&vet1[i]);
        
    for (i = 0; i < n; i++)
        scanf("%d",&vet2[i]);
        
    mesclarVetores(vet1, vet2, vet3, n);
    
    //printf("Vetor mesclado e ordenado:\n");
    for (int i = 0; i < 2*n; i++) {
        printf("%d ", vet3[i]);
    }
    
    return 0;
}
