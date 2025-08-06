#include <stdio.h>
int main(){
	int n, i;
	float a,b,c, media;
	float p1=2.0,p2=3.0,p3=5.0;
	
	scanf("%d", &n);
	for(i=1; i<=n;i++){
		scanf("%f %f %f",&a,&b,&c);
		media = (a*p1 + b*p2 + c*p3)/(p1+p2+p3);
		printf("%.1f\n",media);
	}
		
	return 0;
}