#include <stdio.h>
#define p1 3.5
#define p2 7.5
int main() {
	float A, B, mediai, mediaf, pf;
	scanf("%f %f", &A, &B);
	    mediai = (A*p1) + (B*p2);
	    pf = p1 + p2;
	    mediaf = mediai / pf;
	    printf("MEDIA = %.5f\n", mediaf);
    return 0;
}