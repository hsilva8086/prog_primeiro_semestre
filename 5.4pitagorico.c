#include <stdio.h>
int main(){
    int a,b,c,hipotenusa;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    //pega o maior e atribui a hipotenusa
    if(a > b && a > c){
        hipotenusa = a;
        if(hipotenusa*hipotenusa == b*b + c*c) {
            printf("1 %d",hipotenusa*hipotenusa);
        } else {
            printf("0");
            return 0; 
        }
    } else if(b > a && b > c){
        hipotenusa = b;
        if(hipotenusa*hipotenusa == a*a + c*c) {
            printf("1 %d",hipotenusa*hipotenusa);
        } else {
            printf("0");
            return 0; 
        }
    } else if(c > a && c > b){
        hipotenusa = c;
        if(hipotenusa*hipotenusa == a*a + b*b) {
            printf("1 %d",hipotenusa*hipotenusa);
        } else {
            printf("0");
            return 0; 
        }
    } else {
        printf("0");
        return 0; 
    }
    
    return 0;
}
