#include <stdio.h>

int main(){
	float m[12][12];
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
			for(j = 0 ; j < 12 ; j++) if (j < i) soma+=m[i][j];
		}
		printf("%.1f\n", soma);
	}
	else if(tipo == 'M'){
		float media=0.0;
		float soma=0.0;
		for(i = 0 ; i < 12 ; i++){
			for(j = 0 ; j < 12 ; j++) if (j < i) soma+=m[i][j];
		}
		media = soma / 66.0;
		printf("%.1f\n", media);
	}
	
	return 0;
}