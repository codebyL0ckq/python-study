#include <stdio.h>
 
int main() {
	int v, va, b50=0,b10=0,b5=0,b1=0,qtd=1;
	do{	
	scanf("%d", &va);
	if(va !=0){
		v = va;   
		b50 = v / 50;
		v = v % 50;
		b10 = v / 10;
		v = v % 10;
		b5 = v / 5;
		v = v % 5;
		b1 = v;
	printf("Teste %d\n", qtd);
	printf("%d %d %d %d\n\n",b50,b10,b5,b1);
	qtd++;
	}
	}
	while (va!=0);
    return 0;
}
