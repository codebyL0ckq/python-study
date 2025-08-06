#include <stdio.h>
 
int main() {
	int a=0,b=0;
	scanf("%d %d", &a,&b);
	if(b < 3){
		printf("nova\n");
	}
	else if(b>2 && b<97 && a>b){
		printf("minguante\n");
	}
	else if(b>96 && b<=100){
		printf("cheia\n");
	}
	else if(b>2 && b<97 && a<b){
		printf("crescente\n");
	}
			else if(b>2 && b<97 && a>b){
		printf("minguante\n");
	}
    return 0;
}
