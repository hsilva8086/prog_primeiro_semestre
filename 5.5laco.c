#include <stdio.h>
int main(){
    int i = 0;
    int total, soma = 0;
    
    scanf("%d", &total);
    for(i = 0; soma+i <= total ;i++)
        soma += i;
    printf("%d",soma);    
    return 0;
}
