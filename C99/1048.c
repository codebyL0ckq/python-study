#include <stdio.h>
 
int main() {
	float sal, taxa,taxap, novosal, reajuste;
	int caso=0;
	scanf("%f", &sal);
	if(sal >= 0 && sal <=400.00){
		caso = 1;
	}
	else if(sal > 400.01 && sal <=800.00){
		caso = 2;
	}
	else if(sal > 800.00 && sal <=1200.00){
		caso = 3;
	}
	else if(sal > 1200.00 && sal <=2000.00){
		caso = 4;
	}
	else {
		caso = 5;
	}
	switch (caso){
		case 1:
			taxa = 1.15;
			taxap = 15;
			break;
		case 2:
			taxa = 1.12;
			taxap = 12;
			break;
		case 3:
			taxa = 1.10;
			taxap = 10;
			break;
		case 4:
			taxa = 1.07;
			taxap = 7;
			break;
		case 5:
			taxa = 1.04;
			taxap = 4;
			break;
	}
	novosal = sal*taxa;
	reajuste = novosal - sal;
	printf("Novo salario: %.2f\n", novosal);
		printf("Reajuste ganho: %.2f\n", reajuste);
			printf("Em percentual: %.0f %%\n", taxap);
    return 0;
}