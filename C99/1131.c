#include <stdio.h>

int main() {
    int loop=1;
    int i=0,g=0,draw=0,a,b;
    int grenal=0;

    while(loop==1){
        grenal++;
        loop=2;
        scanf("%d %d", &a,&b);
        if(a>b) i++;
        else if(a<b) g++;
        else draw++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &loop);
    }
    printf("%d grenais\n", grenal);
    printf("Inter:%d\n", i);
    printf("Gremio:%d\n", g);
    printf("Empates:%d\n", draw);
    if(i>g) printf("Inter venceu mais\n");
    else printf("Gremio venceu mais\n");
    return 0;
}
