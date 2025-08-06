#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
	long long int diai, diaf, horai, horaf, mini,minf,segi,segf;
	long long int dia,hora,min,seg=0;
	long long int inicio, fim, total;
	
	scanf("Dia %lld\n", &diai);
	scanf("%lld : %lld : %lld\n", &horai, &mini, &segi);
	scanf("Dia %lld\n", &diaf);
	scanf("%lld : %lld : %lld", &horaf, &minf, &segf);

	
	inicio =(diai-1)*86400LL + horai*3600LL + mini*60LL + segi;
	fim = (diaf-1)*86400LL + horaf*3600LL + minf*60LL + segf;
	total = fim - inicio;
	
	dia = total / 86400LL;
	total %= 86400LL;
	hora = total / 3600LL;
	total %= 3600LL;
	min = total / 60LL;
	total %= 60LL;
	seg = total;
	
	printf("%lld dia(s)\n", dia);
	printf("%lld hora(s)\n", hora);
	printf("%lld minuto(s)\n", min);
	printf("%lld segundo(s)\n", seg);
    return 0;
}