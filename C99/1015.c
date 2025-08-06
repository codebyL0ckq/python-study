#include <stdio.h>
#include <math.h>
 
int main() {
	double raizf, pot1i, pot1f, pot2i, pot2f, x1, y1, x2, y2;
	scanf("%lf%lf",&x1,&y1);
	scanf("%lf%lf",&x2,&y2);
	pot1i = x2 - x1;
	pot1f = pow(pot1i, 2);
	pot2i = y2 - y1;
	pot2f = pow(pot2i, 2);
	raizf = sqrt(pot1f + pot2f);
	printf("%.4lf\n", raizf);
    return 0;
}