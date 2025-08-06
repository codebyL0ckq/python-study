#include <stdio.h>
 
int main() {
	float a,b,c,d,e,f, avg;
	int mais;
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	if(a >=0) mais++, avg += a;
	if(b >=0) mais++, avg += b;
	if(c >=0) mais++, avg += c;
	if(d >=0) mais++, avg += d;
	if(e >=0) mais++, avg += e;
	if(f >=0) mais++, avg += f;
	avg = avg / mais;
	printf("%d valores positivos\n", mais);
	printf("%.1f\n", avg);
    return 0;
}