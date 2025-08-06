#include <stdio.h>
#define max 10000
int main(){
	int s[max], b[max], a[max];
	int cs[max], cb[max], ca[max];
	int i,j,k;
	int maxp;
	int somas=0,somab=0,somaa=0;
	int somacs=0,somacb=0,somaca=0;
	float ps,pb,pa;
	char nome[100];

	scanf("%d", &maxp);
	for(i = 0 ; i < maxp ; i++){
		scanf("%*s", &nome[i]);
		scanf("%d%d%d",&s[i], &b[i], &a[i]);
		scanf("%d%d%d",&cs[i], &cb[i], &ca[i]);
	}
	for(k=0 ; k < maxp ; k++){
		somas+= s[k];
		somab+= b[k];
		somaa+= a[k];
		somacs+= cs[k];
		somacb+= cb[k];
		somaca+= ca[k];

	}
	ps = somacs*100.0f / somas;
	pb = somacb*100.0f / somab;
	pa = somaca*100.0f / somaa;

	printf("Pontos de Saque: %.2f %%.\n", ps);
	printf("Pontos de Bloqueio: %.2f %%.\n", pb);
	printf("Pontos de Ataque: %.2f %%.\n", pa);
	return 0;
}