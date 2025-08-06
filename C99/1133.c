#include <stdio.h>

int main() {
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a>b){
        int aux=a;
        a=b;
        b=aux;
    }

    for(int i=a+1 ; i<b ; i++){
        if( i % 5 == 2 || i % 5 == 3 ) printf("%d\n", i);
    }
    return 0;
}
