#include <stdio.h>
#define pi 3.14159
int main() {
	double vol, raio;
	scanf("%lf", &raio);
	vol = (4.0/3.0)*pi*raio*raio*raio;
	printf("VOLUME = %.3lf\n",vol);
}