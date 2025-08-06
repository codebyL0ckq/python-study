#include <stdio.h>
#include <math.h>
 
int main() {
	float tx,dx,vx,ty,dy,vy, dist, tempo;
	scanf("%f",&dist);
	tx = dx/vx;
	ty = dy/vy;
	tempo = 2*dist;
	printf("%.0f minutos\n",tempo);
    return 0;
}