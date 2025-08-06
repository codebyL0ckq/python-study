#include <stdio.h>
 
int main() {
	int n, h=0, m=0, s=0, valor;
	scanf("%d",&n);
	valor = n;
	if(n>=3600) {
	h = valor / 3600;
	valor = valor % 3600;
	}
	if(n>=60 || n<3600){
	m = valor / 60;
	valor = valor % 60;
	}
	s = valor;
	printf("%d:%d:%d\n",h,m,s);
    return 0;
}