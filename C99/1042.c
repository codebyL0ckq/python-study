#include <stdio.h>
int main() {
    int a, b, c, menor, meio, maior;
    scanf("%d%d%d",&a,&b,&c);
    if (a<=b && a<=c) {
        menor = a;
        if (c>=b) {
            meio = b;
            maior = c;
        } else {
            meio = c;
            maior = b;
        }
    } else if (b<=a && b<=c) {
        menor = b;
        if (c>= a) {
            meio = a;
            maior = c;
        } else {
            meio = c;
            maior = a;
        }
    } else {
        menor = c;
        if (b>=a) {
            meio = a;
            maior = b;
        } else {
            meio = b;
            maior = a;
        }
    }
    printf("%d\n%d\n%d\n\n", menor, meio, maior);
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}