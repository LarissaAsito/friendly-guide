#include<stdio.h>
main(){
	int v[10], i,j, aux;
	
	printf("Entre com 10 digitos:\n");
	for(i=0; i<10; i++){
		printf("%dº :", i+1);
		scanf("%d", &v[i]);					
	}
	for(j=0; j<10; j++)
		for(i=0; i<9; i++){// bubble só troca os dois termos
			if(v[i]<v[i+1]){
				aux = v[i];
				v[i] = v[i+1];
				v[i+1] = aux;
			}			
		}
	printf("O v ordenado de forma decrescente e:\n");
	for(i=0; i<10; i++){
		printf("%d _ ", v[i]);				
	}
}
