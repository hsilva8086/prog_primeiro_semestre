#include <stdio.h>
#include <stdlib.h>

int busca_binaria(int vet[], int ini, int fim, int x) {
    int meio;
    meio = (ini + fim) / 2;
    if(ini>fim) return -1; //ponto de parada
    printf("%d %d\n", ini, fim);
    if(vet[meio] == x) return meio; //ponto de parada

    if(x<vet[meio]){
        busca_binaria(vet,ini, meio-1, x);
    } else if(x>vet[meio]){
        busca_binaria(vet,meio+1, fim, x);
    }
}
    
int main() {
    //criar e alimentar o vetor bigvet com valores em ordem crescente(a order esta cargo do usuario).
    int i,x = 0,resp,bigvet[100];
    for(i = 0; i < sizeof(bigvet); i++) {
        scanf("%d",&x);
        if(x < 0)
            break;
        else
            bigvet[i] = x;
    }
    //rotina de busca dos valores em busca_binaria ate que um valor negativo seja informado.
    int y = 0;
    int ini = 0;
    int fim = i-1;
    while (y>=0) {
        scanf("%d",&y);
        if(y <= 0) break;
        resp = busca_binaria(bigvet,ini,fim,y);
        printf("%d\n",resp);
    }
    return 0;
}
