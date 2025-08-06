#include <stdio.h>
 
int main() {
	int e,d, soma=0, i=1, zero=0;
	do{
		scanf("%d %d",&e,&d);
		soma = e + d;
		if (soma>0)printf("%d\n", soma);
		if (e==0 && d==0) i=zero;
	}
	while(i);
    return 0;
}