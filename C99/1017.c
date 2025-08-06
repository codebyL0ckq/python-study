#include <stdio.h>
#include <math.h>
#define consum 12.0
 
int main() {
	float time,speed, dist, liters;
	scanf("%f",&time);
	scanf("%f",&speed);
	dist = speed*time;
	liters = dist/consum;
	printf("%.3f\n",liters);
    return 0;
}