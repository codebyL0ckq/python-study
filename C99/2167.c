#include <stdio.h>
#define maxrpm 100

int main(){
	int rpm[maxrpm];
	int maxn;
	int inicio;
	int i, pos;
	scanf("%d", &maxn);
	
	for(i=0 ; i < maxn ; i++){
		scanf("%d", &rpm[i]);
	}
	inicio = rpm[0];
	pos=0;
	for(i=1 ; i < maxn ; i++){
		if(inicio > rpm[i]){
			pos = i+1;
			i = maxn;
		}
		else inicio = rpm[i];
	}
	printf("%d\n", pos);
	return 0;
}