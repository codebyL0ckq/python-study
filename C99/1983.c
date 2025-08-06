#include <stdio.h>
#include <time.h>

int main(){
	int aluno[97];
	int n, val;
	int i, j;
	float nota[97];
	float auxf;
	int aux;
	scanf("%d", &n);
	
	for(i=0 ; i<n ; i++){
		scanf("%d %f",&aluno[i],&nota[i]);
	}
	for(i=0; i < n-1 ; i++){
		for(j=i+1 ; j<n ; j++){
			if(nota[i] > nota[j]){
				auxf = nota[i];
				nota[i] = nota[j];
				nota[j] = auxf;
				
				aux = aluno[i];
				aluno[i] = aluno[j];
				aluno[j] = aux;
			}
		}
	}
	if(nota[n-1] >=8.0) printf("%d\n", aluno[n-1]);
	else printf("Minimum note not reached\n");
	return 0;
}