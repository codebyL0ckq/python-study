#include <stdio.h>
 
int main() {
    float dist, spent, consum;
    scanf("%f%f",&dist,&spent);
    consum = dist/spent;
    printf("%.3f km/l\n", consum);
    return 0;
}