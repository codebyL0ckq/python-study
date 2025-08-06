#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,delta,r1,r2, raiz;
    int pao;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a == 0){
    printf("Impossivel calcular\n");
    return 0;
    }
    delta = pow(b, 2) + (-4.0)*a*c; // teste se pow pode ir direto na conta
    if(delta < 0){
    printf("Impossivel calcular\n");
    return 0;
    }
    raiz = sqrt(delta);
    r1 = ((-b) + raiz)/(2.0*a);
    r2 = ((-b) - raiz)/(2.0*a);
    printf("R1 = %.5lf\n", r1);
    printf("R2 = %.5lf\n", r2);
    return 0;
}