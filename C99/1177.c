#include <stdio.h>

int main(){
int var[1000];
int i,j,n;
scanf("%d", &n);
for(i=0;i < 1000; ){
for(j=0 ; j < n ; j++){
var[i] = j;
if(i<=999) printf("N[%d] = %d\n", i, var[i]);
i++;
}
}
return 0;
}