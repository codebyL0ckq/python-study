#include <stdio.h>
#include <math.h>
int main() {
	int n, a, b;
	int aux, soma=0;
	scanf("%d", &n);
	
	for(int i=0; i<n ; i++){
		scanf("%d %d", &a, &b);
		if(a>b){
			aux = a;
			a = b;
			b = aux;
			for(int j=a+1; j<b ; j++){
				if(j % 2 != 0) soma+= j;
			}
			printf("%d\n", soma);
			soma = 0;
		}
		else if(a<b){
			for(int j=a+1; j<b ; j++){
				if(j % 2 != 0) soma+= j;
			}
			printf("%d\n", soma);
			soma = 0;
		}
		else if(a == b || a+1 == b || b+1 == a){
			soma = 0;
			printf("%d\n", soma);
		}
	}
    return 0;
}