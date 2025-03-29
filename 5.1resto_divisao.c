#include <stdio.h>
int main(){
    int n,r;
    scanf("%d",&n);
    r = n%2;
    if(r == 1){
        printf("%d",0);    
    } else {
        printf("%d",1);        
    }
    
    return 0;
}
