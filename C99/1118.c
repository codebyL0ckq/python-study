#include <stdio.h>
#include <math.h>
int main() {
	int loop=1;
	while(loop==1){
		loop=3;
	float a=-1.0,b=-1.0, media;
		while(a<0 || a>10){
			scanf("%f", &a);
			if(a<0 || a>10) printf("nota invalida\n");
		}
		while(b<0 || b>10){
			scanf("%f", &b);
			if(b<0 || b>10) printf("nota invalida\n");
		}
	media = (a+b)/2.0;
	printf("media = %.2f\n",media);
	while(loop<1 || loop>2){
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d", &loop);
	}
	}
    return 0;
}