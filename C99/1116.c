#include <stdio.h>
#include <math.h>
int main() {
	int n;
	float a,b, div;
	scanf("%d", &n);
	for(int i=0 ; i<n ; i++){
		scanf("%f %f", &a,&b);
		if(!b) printf("divisao impossivel\n");
		else{
			div = a / b;
			printf("%.1f\n", div);
		}
	}
	
    return 0;
}