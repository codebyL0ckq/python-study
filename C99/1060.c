#include <stdio.h>
 
int main() {
	float a,b,c,d,e,f;
	int mais;
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	if(a >=0) mais++;
	if(b >=0) mais++;
	if(c >=0) mais++;
	if(d >=0) mais++;
	if(e >=0) mais++;
	if(f >=0) mais++;
	printf("%d valores positivos\n", mais);
    return 0;
}