#include <stdio.h>

int main (){
	int x, count;
	scanf("%d", &x);
	for(count = 1; count <= 6; x++){
		if(x % 2 != 0){
		    printf("%d\n", x);
		    count++;
		}
		
	}
	return 0;
}