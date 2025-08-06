#include <stdio.h>
 
int main() {
	int n, a=0, m=0, d=0, valor;
	scanf("%d",&n);
	valor = n;
	if(n>=365) {
	a = valor / 365;
	valor = valor % 365;
	}
	if(n>=30 || n<365){
	m = valor / 30;
	valor = valor % 30;
	}
	d = valor;
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a,m,d);
    return 0;
}