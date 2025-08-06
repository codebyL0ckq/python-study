#include <stdio.h>

int main() {
    int a,b,soma=0;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a>b){
        int aux=a;
        a=b;
        b=aux;
    }

    for(int i=a ; i<=b ; i++){
        if( !(i % 13 == 0) ) soma+=i;
    }
    printf("%d\n", soma);
    return 0;
}
