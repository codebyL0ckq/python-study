#include <stdio.h>
 
int main() {
	int hi, mi, hf, mf, hora, min, totali, totalf;
	scanf("%d%d%d%d",&hi,&mi,&hf,&mf);
	totali = hi*60 + mi;
	totalf = hf*60 + mf;
	if(totalf > totali){
		hora = (totalf - totali) / 60;
		min = (totalf - totali) % 60;
	}
	else {
		hora = (60*24 - totali) + totalf;
		hora = hora / 60;
		min = ((60*24 - totali) + totalf) % 60;
	}
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, min);
    return 0;
}