#include <stdio.h>
#include <math.h>
int main() {
	int a=1,b=1;
	while(a*b){
		scanf("%d %d", &a, &b);
		if(a*b){
			if(a>0 && b>0) printf("primeiro\n");
			else if(a<0 && b>0) printf("segundo\n");
			else if(a<0 && b<0) printf("terceiro\n");
			else if(a>0 && b<0) printf("quarto\n");
		}
	}
    return 0;
}