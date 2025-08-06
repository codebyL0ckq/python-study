#include <stdio.h>
#include <math.h>
int main() {
	double i=0.0,j;
	int n=0;
	while(n <= 10){
		i=n*0.2;
		for(j=1.0 ; j<=3.0; j++){
			if((int)i == i) printf("I=%.0lf J=%.0lf\n",i,j+i);
			else printf("I=%.1lf J=%.1lf\n",i,j+i);
		}
		n++;
	}
    return 0;
}