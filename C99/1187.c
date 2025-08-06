#include <stdio.h>

int main() {
    double m[12][12];
    char tipo;
    double soma = 0.0;
    int cont = 0;

    scanf(" %c", &tipo);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &m[i][j]);
        }
    }

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (j > i && j + i < 11) {
                soma += m[i][j];
                cont++;
            }
        }
    }

    if (tipo == 'S') {
        printf("%.1lf\n", soma);
    } else if (tipo == 'M') {
        printf("%.1lf\n", soma / cont);
    }

    return 0;
}
