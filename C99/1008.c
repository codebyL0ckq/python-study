#include <stdio.h>
int main() {
	float num, hora, salh, salf;	
	scanf("%f %f %f", &num,&hora,&salh);
	salf = salh*hora;
	printf("NUMBER = %.0f\nSALARY = U$ %.2f\n", num, salf);
    return 0;
}