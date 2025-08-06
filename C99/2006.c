#include <stdio.h>
 
int main() {
	int t,a,b,c,d,e,qtd=0;
	scanf("%d",&t);
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	switch (t) {
		case 1:
			if(a == t) qtd++;
			if(b == t) qtd++;
			if(c == t) qtd++;
			if(d == t) qtd++;
			if(e == t) qtd++;
			break;
		case 2:
			if(a == t) qtd++;
			if(b == t) qtd++;
			if(c == t) qtd++;
			if(d == t) qtd++;
			if(e == t) qtd++;
			break;
		case 3:
			if(a == t) qtd++;
			if(b == t) qtd++;
			if(c == t) qtd++;
			if(d == t) qtd++;
			if(e == t) qtd++;
			break;
		case 4:
			if(a == t) qtd++;
			if(b == t) qtd++;
			if(c == t) qtd++;
			if(d == t) qtd++;
			if(e == t) qtd++;
			break;		
	}
	printf("%d\n",qtd);
    return 0;
}		