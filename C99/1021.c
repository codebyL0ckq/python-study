#include <stdio.h>
#include <math.h>
 
int main() {
	float r;
	int n100=0, n50=0, n20=0, n10=0, n5=0, n2=0;
	int m100=0, m50=0, m25=0, m10=0, m5=0, m1=0;
	int n;
	scanf("%f", &r);
	n = (int) round(r * 100);
	if(n>=10000){
		n100 = n / 10000;
		n = n % 10000;
	}
	if(n>=5000){
		n50 = n / 5000;
		n = n % 5000;
		
	}
	if(n>=2000){
		n20 = n / 2000;
		n = n % 2000;
	}
	if(n>=1000){
		n10 = n / 1000;
		n = n % 1000;
	}
	if(n>=500){
		n5 = n / 500;
		n = n % 500;
	}
	if(n>=200){
		n2 = n / 200;
		n = n % 200;
	}
	if(n>=100){
		m100 = n / 100;
		n =  n % 100;
	}
	if(n>=50){
		m50 = n / 50;
		n =  n % 50;
	}
	if(n>=20){
		m25 = n / 25;
		n =  n % 25;
	}
	if(n>=10){
		m10 = n / 10;
		n =  n % 10;
	}
	if(n>=5){
		m5 = n / 5;
		n =  n % 5;
	}
	m1 = n;
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", n100);
	printf("%d nota(s) de R$ 50.00\n", n50);
	printf("%d nota(s) de R$ 20.00\n", n20);
	printf("%d nota(s) de R$ 10.00\n", n10);
	printf("%d nota(s) de R$ 5.00\n", n5);
	printf("%d nota(s) de R$ 2.00\n", n2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", m100);
	printf("%d moeda(s) de R$ 0.50\n", m50);
	printf("%d moeda(s) de R$ 0.25\n", m25);
	printf("%d moeda(s) de R$ 0.10\n", m10);
	printf("%d moeda(s) de R$ 0.05\n", m5);
	printf("%d moeda(s) de R$ 0.01\n", m1);
	
	
	
    return 0;
}