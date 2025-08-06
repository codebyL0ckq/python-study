#include <stdio.h>

int main(){
int var[20],n;
int i,a,b;
for(i=0;i < 20; i++){
scanf("%d", &n);
var[i] = n;
}
for(i=0;i <10 ; i++){
a = var[i];
b = var[19-i];
var[19-i] = a;
var[i] = b;
}
for(i=0;i <20 ; i++){
printf("N[%d] = %d\n",i, var[i]);
}
return 0;
}