#include <stdio.h>
int main(){
	int n, i, j;
	int num, somac=0,somas=0,somar=0,somatotal=0;
	float porc,porr,pors;
	char tipo;
	scanf("%d", &n);
	for(i=1 ; i<=n ; i++){
		scanf("%d %c", &num, &tipo);
		switch(tipo){
			case 'C':
				somac+=num;
				somatotal+=num;
				break;
			case 'R':
				somar+=num;
				somatotal+=num;
				break;
			case 'S':
				somas+=num;
				somatotal+=num;
				break;
		}	
	}
	porc = (float) somac / somatotal * 100;
	porr = (float) somar / somatotal * 100;
	pors = (float) somas / somatotal * 100;
	
	printf("Total: %d cobaias\n",somatotal);
	printf("Total de coelhos: %d\n",somac);
	printf("Total de ratos: %d\n",somar);
	printf("Total de sapos: %d\n",somas);
	printf("Percentual de coelhos: %.2f %%\n",porc);
	printf("Percentual de ratos: %.2f %%\n",porr);
	printf("Percentual de sapos: %.2f %%\n",pors);
	return 0;
}