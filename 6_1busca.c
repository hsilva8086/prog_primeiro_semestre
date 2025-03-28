#include <stdio.h>
int busca(int vet[], int n, int x) {
    int i;
    for (i=0;i<n;i++){
        if(vet[i] == x){
            return i;
        }
    }
    return -1;
}

int main() {
    int i,x = 0,resp,bigvet[100];
    for(i=0;i<sizeof(bigvet)/4;i++){
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
