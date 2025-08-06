#include <stdio.h>
 
int main() {
	int input,n100,n50,n20,n10,n5,n2;
	int q100,q50,q20,q10,q5,q2,q1;
	int r100,r50,r20,r10,r5,r2;
	scanf("%d", &input);
	n100 = input;
	q100 = n100 / 100; //qtd notas 100
	r100 = n100 % 100;
	n50 = r100;
	q50 = n50 / 50; //qtd notas 50
	r50 = n50 % 50;
	n20 = r50;
	q20 = n20 / 20; //qtd notas 20
	r20 = n20 % 20;
	n10 = r20;
	q10 = n10 / 10; //qtd notas 10
	r10 = n10 % 10;
	n5 = r10;
	q5 = n5 / 5; //qtd notas 5
	r5 = n5 % 5;
	n2 = r5;
	q2 = n2 / 2; //qtd notas 2
	r2 = n2 % 2;
	q1 = r2 / 1; //qtd notas 1
	
	printf("%d\n", input);
	printf("%d nota(s) de R$ 100,00\n", q100);
	printf("%d nota(s) de R$ 50,00\n", q50);
	printf("%d nota(s) de R$ 20,00\n", q20);
	printf("%d nota(s) de R$ 10,00\n", q10);
	printf("%d nota(s) de R$ 5,00\n", q5);
	printf("%d nota(s) de R$ 2,00\n", q2);
	printf("%d nota(s) de R$ 1,00\n", q1);

    return 0;
}