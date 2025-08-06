#include <stdio.h>
int main(){
double var[100], n;
int i;
scanf("%lf", &n);
for(i=0 ; i<100 ; i++){
var[i] = n;
n/=2.0;
}
for(i=0 ; i<100 ; i++){
printf("N[%d] = %.4lf\n",i,var[i]);
}
return 0;
}