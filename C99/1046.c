#include <stdio.h>
 
int main() {
	int x,y, hora;
	scanf("%d%d",&x,&y);
	if(y>=12 && x<12){
		hora = y- x;
	}
	else {
	hora = y + (24 - x);
	}
	printf("O JOGO DUROU %d HORA(S)\n", hora);
    return 0;
}