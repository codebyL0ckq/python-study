#include <stdio.h>
int main(){
	int n, i, j;
	int maior=0, num, pos;
	for(i=1 ; i<=100 ; i++){
		scanf("%d", &num);
		if(maior < num){
			maior = num;
			pos = i;
	}
	}
    printf("%d\n", maior);
	printf("%d\n", pos);
	return 0;
}