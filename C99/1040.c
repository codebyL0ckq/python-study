#include <stdio.h>
 
int main() {
	float n1,n2,n3,n4, media, adc;
	scanf("%f%f%f%f", &n1,&n2,&n3,&n4);
	media = (n1*2.0 + n2*3.0 + n3*4.0 + n4*1) / (2.0+3.0+4.0+1.0);
	printf("Media: %.1f\n", media);
	if(media >=7){
		printf("Aluno aprovado.\n");
	}
	else if(media < 5){
		printf("Aluno reprovado.\n");
	}
	else if(media >=5 && media <7){
		printf("Aluno em exame.\n");
		scanf("%f", &adc);
		printf("Nota do exame: %.1f\n", adc);
		media = (media + adc) / 2.0;
		if (media >= 5) {
			printf("Aluno aprovado.\n");
		}
		else if(media < 5) {
			printf("Aluno reprovado.\n");
		}
		printf("Media final: %.1f\n", media);
	}
    return 0;
}