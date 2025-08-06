#include <stdio.h>
#define pi 3.14159
int main() {
	int a,b,c, maiorab, maiorabc;
	scanf("%d %d %d", &a,&b,&c);
	maiorab = (a+b+abs(a-b))/2.0;
	maiorabc = (maiorab+c+abs(maiorab-c))/2.0;
	printf("%d eh o maior\n", maiorabc);
    return 0;	
}