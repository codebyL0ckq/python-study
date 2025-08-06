#include <stdio.h>
 
int main() {
	float x, taxa=0;
	scanf("%f", &x);
	if(x >= 0 && x <=2000){
		printf("Isento\n");
	}
	else {
		if ( x > 4500){
			taxa = taxa + (x - 4500)*0.28;
			x = 4500;
		}
		if ( x > 3000){
			taxa = taxa + (x - 3000)*0.18;
			x = 3000;
		}
		if ( x > 2000){
			taxa = taxa + (x - 2000)*0.08;
			x = 2000;
		}
		printf("R$ %.2f\n", taxa);
	}
    return 0;
}