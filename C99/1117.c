#include <stdio.h>
#include <math.h>
int main() {
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
    return 0;
}