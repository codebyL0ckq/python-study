#include <stdio.h>

int main(){
float var[100],n;
int i;
for(i=0;i < 100; i++){
scanf("%f", &n);
var[i] = n;
if(var[i] <= 10 )
printf("A[%d] = %.1f\n",i,var[i]);
}
return 0;
}