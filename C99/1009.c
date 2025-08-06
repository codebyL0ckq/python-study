#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
	char nome[20];
	double s,sale,total;
	
	scanf("%*s", nome);
	scanf("%lf", &s);
	scanf("%lf", &sale);
	
	total = s + sale*0.15;
	
	printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}