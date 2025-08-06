#include <stdio.h>
#include <math.h>
 
int main() {
	double a,b,c, aux;
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	//sort
	if(b>a){
		aux = a;
		a = b;
		b = aux;
	}
	if(c>a){
		aux = a;
		a = c;
		c = aux;
	}
	int tipo = -1;
	int tipoespecial = -1;
	int triangulo = -1;
	//saber tipo
	if(a >= (b+c))triangulo = 0;
	else triangulo = 1;
	if( pow(a,2) == (pow(b,2)+pow(c,2)) ) tipo = 2;
	if( pow(a,2) > (pow(b,2)+pow(c,2)) ) tipo = 3;
	if( pow(a,2) < (pow(b,2)+pow(c,2)) ) tipo = 4;
	
	if(a == b && a == c) tipoespecial = 1;
	if( (a == b && a != c) || (a == c && a != b) || (c == b && a != c) ) tipoespecial = 2;
	//print tipo
	if(triangulo){
	switch(tipo){
		case 2:
			printf("TRIANGULO RETANGULO\n");
			break;
		case 3:
			printf("TRIANGULO OBTUSANGULO\n");
			break;
		case 4:
			printf("TRIANGULO ACUTANGULO\n");
			break;
		}
	switch(tipoespecial){
		case 1:
			printf("TRIANGULO EQUILATERO\n");
			break;
		case 2:
			printf("TRIANGULO ISOSCELES\n");
			break;
	}
	}
	else printf("NAO FORMA TRIANGULO\n");
    return 0;
}