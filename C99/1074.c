#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
	int n;
	scanf("%d",&n);
	int x;
	for(int i=0 ; i<n ; i++){
		scanf("%d", &x);
		if (x == 0) printf("NULL\n");
		else{
			if(x > 0 && x % 2 == 0) printf("EVEN POSITIVE\n");
			else if(x > 0 && x % 2 != 0) printf("ODD POSITIVE\n");
			else if(x < 0 && x % 2 == 0) printf("EVEN NEGATIVE\n");
			else if(x < 0 && x % 2 != 0) printf("ODD NEGATIVE\n");
		}
	}
    return 0;
}