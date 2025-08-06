#include <stdio.h>
#define p1 2
#define p2 3
#define p3 5
int main() {
	float A, B, C, mediai, mediaf, pf;
	scanf("%f %f %f", &A, &B, &C);
	    mediai = (A*p1) + (B*p2) + (C*p3);
	    pf = p1 + p2 + p3;
	    mediaf = mediai / pf;
	    printf("MEDIA = %.1f\n", mediaf);
    return 0;
}
