#include<stdio.h>
main(){
	int vetor[10], i,j, aux;
	
	printf("Entre com 10 digitos:\n");
	for(i=0; i<10; i++){
		printf("%dº :", i+1);
		scanf("%d", &vetor[i]);					
	}
	for(j=0; j<10; j++)
		for(i=0; i<9; i++){// bubble só troca os dois termos
			if(vetor[i]<vetor[i+1]){
				aux = vetor[i];
				vetor[i] = vetor[i+1];
				vetor[i+1] = aux;
			}			
		}
	printf("O vetor ordenado de forma decrescente e:\n");
	for(i=0; i<10; i++){
		printf("%d _ ", vetor[i]);				
	}
}
