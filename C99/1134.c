#include <stdio.h>

int main() {
    int tipo[5]={0,0,0,0,0};
    int a;

    while(!(tipo[4])){
        scanf("%d", &a);
        if(a>0 && a<=4) tipo[a]++;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", tipo[1]);
    printf("Gasolina: %d\n", tipo[2]);
    printf("Diesel: %d\n", tipo[3]);
    return 0;
}
