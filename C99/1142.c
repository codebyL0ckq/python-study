#include <stdio.h>

int main() {
    int n;
    int cont=1;
    scanf("%d", &n);
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<3 ; j++){
            printf("%d ", cont++);
        }
        cont++;
        printf("PUM\n");
    }
    return 0;
}