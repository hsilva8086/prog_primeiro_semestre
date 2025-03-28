#include <stdio.h>
int busca_binaria(int vet[], int n, int x) {
    int i,ini,fim,meio;
    ini = 0;
    fim = sizeof(vet);
    
    for (i=0; i<fim; i++){
        meio = (ini + fim) / 2;
        print("%d %d\n", ini, fim);
        if(vet[i] == x){
            return i;
        }
    }
    
    return -1;
}

int main() {
    int i,x = 0,resp,bigvet[100];
    for(i=0;i<sizeof(bigvet);i++){
        scanf("%d",&x);
        if(x < 0)
            break;
        else
            bigvet[i] = x;
    }
    int y = 0;
    while (y>=0) {
        scanf("%d",&y);
        if(y <= 0) break;
        resp = busca(bigvet,i,y);
        printf(" %d ",resp);
    }
}
