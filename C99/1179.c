#include <stdio.h>

int main(){

	int par[5], impar[5];
	int i,j,k;
	int n;
	int contpar=0, contimpar=0;

	for(k=1 ; k<=15 ; k++){

		scanf("%d",&n);
		if(n % 2 == 0){
			par[contpar] = n;
			contpar++;
		if(contpar == 5){
			for(i=0 ; i<5 ; i++){
				printf("par[%d] = %d\n", i, par[i]);
			}
		contpar=0;
		}
	}
	
		else{
			impar[contimpar] = n;
			contimpar++;
			if(contimpar == 5){
				for(i=0 ; i<5 ; i++){
				printf("impar[%d] = %d\n", i, impar[i]);
				}
				contimpar=0;
			}
		}
	}
	for(i=0 ; i<contimpar ; i++){
		printf("impar[%d] = %d\n", i, impar[i]);
	}
	for(i=0 ; i<contpar ; i++){
		printf("par[%d] = %d\n", i, par[i]);
	}
	return 0;
}