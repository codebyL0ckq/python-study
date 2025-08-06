#include <stdio.h>

int main(){
int var[10];
int i, n;
scanf("%d",&n);
for(i=0;i < 10; i++){
var[i] = n;
printf("N[%d] = %d\n",i,var[i]);
n*=2;
}
return 0;
}