int main() {
	int a,b, maior, menor, soma=0;
	scanf("%d%d",&a,&b);
	if(a>=b){
		maior = a;
		menor = b;
	}
	else{
		menor = a;
		maior = b;
	}
	menor++;
	while (maior > menor){
		if (menor % 2 != 0){
			soma += menor;
			menor++;
		}
		menor++;
	}
	printf("%d\n", soma);
    return 0;
}