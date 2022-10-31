#include<stdio.h>
main(){
	int n[10], i,j, aux;
	
	printf("Entre com 10 digitos:\n");
	for(i=0; i<10; i++){
		printf("%dº :", i+1);
		scanf("%d", &n[i]);					
	}
	for(j=0; j<10; j++)
		for(i=0; i<9; i++){// bubble só troca os dois termos
			if(n[i]<n[i+1]){
				aux = n[i];
				n[i] = n[i+1];
				n[i+1] = aux;
			}			
		}
	printf("O N ordenado de forma decrescente e:\n");
	for(i=0; i<10; i++){
		printf("%d _ ", n[i]);				
	}
}
