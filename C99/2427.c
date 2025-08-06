#include <stdio.h>
 
int main() {
	int l, qntd=1;
	scanf("%d", &l);
	while (l>2){
		qntd *=4;
		l = l/2;
	}
	if (l == 2) qntd *=4;
	printf("%d\n", qntd);
    return 0;
}