#include <stdio.h>
int main(){
    int a,b,c;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if(a+b+c == 180){
        printf("Sim %d %d %d",a,b,c);
    } else {
        printf("NAO %d",a+b+c);
    }
    
    return 0;
}
