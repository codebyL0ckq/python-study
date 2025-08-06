#include <stdio.h>
int main() {
	float p1, n1, v1, p2, n2, v2, pagar;	
	scanf("%f %f %f", &p1,&n1,&v1);
	scanf("%f %f %f", &p2,&n2,&v2);	
	pagar = n1*v1 + n2*v2;
	printf("VALOR A PAGAR: R$ %.2f\n", pagar);
    return 0;
}