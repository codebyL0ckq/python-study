#include <stdio.h>
 
int main() {
	int a,b,c,d,e,f, avg;
	int mais;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	if(a%2 == 0) mais++;
	if(b%2 == 0) mais++;
	if(c%2 == 0) mais++;
	if(d%2 == 0) mais++;
	if(e%2 == 0) mais++; 
	avg = avg / mais;
	printf("%d valores pares\n", mais);
    return 0;
}