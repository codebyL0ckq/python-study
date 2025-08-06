#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
	int a,b,c,d,e;
	int even=0,odd=0,p=0,n=0;
	int aux;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);
	
	for(int i = 1 ; i <=5 ; i++){
		switch(i){
			case 1:
				aux = a;
				break;
			case 2:
				aux = b;
				break;
			case 3:
				aux = c;
				break;
			case 4:
				aux = d;
				break;
			case 5:
				aux = e;
				break;
		}
		
		if(aux % 2 == 0) even++;
		else odd++;
		if(aux > 0) p++;
		else if(aux < 0) n++;
	}
	printf("%d valor(es) par(es)\n", even);
	printf("%d valor(es) impar(es)\n", odd);
	printf("%d valor(es) positivo(s)\n", p);
	printf("%d valor(es) negativo(s)\n", n);
    return 0;
}