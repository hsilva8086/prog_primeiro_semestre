#include <stdio.h>
int busca_binaria(int vet[], int n, int x) {
    int i,ini,fim,meio;
    ini = 0;
    fim = n;
    
    for (i=0; i<fim; i++) {
        printf("%d %d\n", ini, fim-1);
        meio = (ini + fim) / 2;
        if(vet[i] == x) {
            return i;
        }
        if (x < meio){
            fim = meio;
        } else {
            ini = meio;
        }
    }
    return -1;
}

int main() {
    //criar e alimentar o vetor bigvet com valores em ordem crescente(a order esta cargo do usuario).
    int i,x = 0,resp,bigvet[100];
    for(i = 0; i < sizeof(bigvet); i++){
        scanf("%d",&x);
        if(x < 0)
            break;
        else
            bigvet[i] = x;
    }
    //rotina de busca dos valores em busca_binaria ate que um valor negativo seja informado.
    int y = 0;
    while (y>=0) {
        scanf("%d",&y);
        if(y <= 0) break;
        resp = busca_binaria(bigvet,i,y);
        printf(" %d ",resp);
    }
    return 0;
}
