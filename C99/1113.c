#include <stdio.h>
#include <math.h>
int main() {
	int a=1,b=2;
	while(!(a==b)){
		scanf("%d %d",&a,&b);
		if(a>b) printf("Decrescente\n");
		if(a<b) printf("Crescente\n");
	}
    return 0;
}