#include <stdio.h>
#define max 1000

int main(){
	int x[max];
	int i,j,k;
	int n, xlim;
	int pos, menor;
	scanf("%d", &xlim);
	
	for(k=0 ; k < xlim ; k++){
		scanf("%d", &x[k]);
	}
	
	menor = x[0];
	pos = 0;
	for(j=1 ; j < xlim ; j++){
		if(x[j] < menor){
			menor = x[j];
			pos = j;
		}
	}
	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", pos);
	return 0;
}