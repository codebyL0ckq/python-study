#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
	int i,j=7;
	for(i=1 ; i<=9 ; i+=2){
		for(int k=3; k!=0 ; k-- && j--){
			printf("I=%d J=%d\n",i,j);
		}
		j+=5;
	}
    return 0;
}