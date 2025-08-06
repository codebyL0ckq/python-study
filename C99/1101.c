#include <stdio.h>
#include <math.h>
int main() {
	int a=1,b=1,soma=0;
	while(a>0 && b>0){
		scanf("%d %d",&a,&b);
		if(a>0 && b>0){
			if(a>b){
			int aux = a;
			a = b;
			b = aux;
			}
			for(int i=a ; i<=b ; i++){
				printf("%d ",i);
				soma+= i;
			}
			printf("Sum=%d\n",soma);
			soma=0;
		}
	}
    return 0;
}