#include<stdio.h>
main(){
	int vet[8], positivo[8], negativo[8], i;
	int cont_p=0;
	int cont_n =0;
	//zerando as variaveis porque as vezes da ruim
	for(i=0; i<8; i++){
		vet[i] =0;
		positivo[i] =0;
		negativo[i] =0;
	}
	printf("Entre com 8 digitos:\n");
	for(i=0; i<8; i++){
		printf("%dº :", i+1);
		scanf("%d", &vet[i]);
		
		if(vet[i]>=0){
			positivo[cont_p] = vet[i];
			cont_p++;
		}			
		else{
			negativo[cont_n] = vet[i];
			cont_n++;
		}			
	}
	if(cont_p==0){
		printf("Nao foram inseridos numeros positivos.");
	}else{
		printf("Os valores positivos sao: \n");
		for(i=0; i<cont_p; i++){
			printf("%d - ", positivo[i]);
		}
	}
	
	if(cont_n==0){
		printf("\nNao foram inseridos numeros negativos.");
	}else{
		printf("Os valores negativos sao: \n");
		for(i=0; i<cont_n; i++){
			printf("%d_", negativo[i]);
		}
	}
}
