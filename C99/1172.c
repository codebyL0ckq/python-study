#include <stdio.h>

int main(){
int y[10];
int i;
for(i=0;i < 10; i++){
scanf("%d",&y[i]);
if(y[i] <= 0) y[i] = 1;
printf("X[%d] = %d\n",i,y[i]);
}

return 0;
}