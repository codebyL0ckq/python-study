#include <stdio.h>
 
int main() {
    int n, x, i, num, pot;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
    if (i % 2 == 0){
    num = i;
    pot = num*num;
    printf("%d^2 = %d\n",num,pot);
    }
    }
    return 0;
}