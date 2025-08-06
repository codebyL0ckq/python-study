#include <stdio.h>
 
int main() {
	int q,w,e,r,t;
	int a,s,d,f,g;
	scanf("%d %d %d %d %d",&q,&w,&e,&r,&t);
	scanf("%d %d %d %d %d",&a,&s,&d,&f,&g);
	if (q!=a && w!=s && e!=d && r!=f && t!=g) printf("Y\n");
	else printf("N\n");
    return 0;
}