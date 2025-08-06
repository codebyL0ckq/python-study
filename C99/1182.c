#include <stdio.h>

int main(){
	float m[12][12];
	int l;
	scanf("%d", &l);
	char tipo;
	scanf(" %c", &tipo);
	int i, j;
	for(i = 0 ; i < 12 ; i++){
		for(j = 0 ; j < 12 ; j++){
			scanf("%f", &m[i][j]);
		}
	}
	if(tipo == 'S'){
		float soma=0.0;
		for(i = 0 ; i < 12 ; i++){
			soma+=m[i][l];
		}
		printf("%.1f\n", soma);
	}
	else if(tipo == 'M'){
		float media=0.0;
		float soma=0.0;
		for(i = 0 ; i < 12 ; i++){
			soma+=m[i][l];
		}
		media = soma / 12.0;
		printf("%.1f\n", media);
	}
	
	return 0;
}