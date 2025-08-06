#include <stdio.h>
 
int main() {
	int a,total, i, fb, j, resp;
	while(scanf("%d\n", &a) != EOF)
		for(i=0;i<a;i++){
			scanf("%d",&fb);
			for(j=0; j<fb; j++){
				scanf("%d", &resp);
				switch(resp){
					case 1:
						printf("Rolien\n");
						break;
					case 2:
						printf("Naej\n");
						break;
					case 3:
						printf("Elehcim\n");
						break;
					case 4:
						printf("Odranoel\n");
						break;
				}
			}
			}
	  return 0;
}