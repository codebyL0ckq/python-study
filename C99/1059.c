#include <stdio.h>
 
int main() {
	int num, i;
	for(i=1; i<=100; i++){
		num = i;
		if (num%2 == 0){
			printf("%d\n", num);
		}
	}
    return 0;
}